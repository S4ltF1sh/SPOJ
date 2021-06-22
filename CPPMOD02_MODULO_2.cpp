//CPPMOD02 - MODULO 2
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    int a, m, Check = 0;
    cin >> a >> m;
    for (int i = 0; i < m; i++)
    {
        if (((a % m) * (i % m)) % m == 1)
        {
            cout << i << endl;
            Check = 1;
            break;
        }
    }
    if (Check == 0)
        cout << -1 << endl;
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