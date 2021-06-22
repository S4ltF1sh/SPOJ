//CPPLCM05 - LCM & GCD 5
//test thu bang Casio vai th laf ra quy luat =))
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
void Run()
{
    string a;
    long long x, y;
    cin >> a >> x >> y;
    for (int i = 0; i < __gcd(x, y); i++)
    {
        cout << a;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}