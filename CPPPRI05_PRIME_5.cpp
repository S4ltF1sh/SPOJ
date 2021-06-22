//CPPPRI05 - PRIME 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> Prime(10005, true);
void Etosthenes()
{
    Prime.at(0) = Prime.at(1) = false;
    for (int i = 2; i * i <= 10000; i++)
    {
        if (Prime.at(i) == true)
        {
            for (int j = i * 2; j <= 10000; j += i)
            {
                Prime.at(j) = false;
            }
        }
    }
}
void Run()
{
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (Prime.at(i) == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    Etosthenes();
    while (t--)
    {
        Run();
    }
    return 0;
}