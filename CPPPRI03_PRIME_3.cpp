//CPPPRI03 - PRIME 3
//Dùng sàng Etosthenes
#include <iostream>
#include <vector>
using namespace std;
vector<bool> Check(1e6 + 1, true);

void isEtosthenes(vector<bool> &Check)
{
    Check.at(0) = Check.at(1) = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (Check.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                Check.at(j) = false;
            }
        }
    }
}
void Run()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (Check.at(i) == true)
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    isEtosthenes(Check);
    while (t--)
    {
        Run();
    }
    return 0;
}