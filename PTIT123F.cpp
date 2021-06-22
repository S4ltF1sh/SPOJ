//PTIT123F - Người cai ngục say rượu
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector<bool> Prisoner(n, true);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j + 1) % (i + 1) == 0)
            {
                if (Prisoner.at(j) == true)
                    Prisoner.at(j) = false;
                else
                    Prisoner.at(j) = true;
            }
        }
    }
    int Count = 0;
    for (int i = 0; i < n; i++)
        if (Prisoner.at(i) == false)
            Count++;
    cout << Count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}