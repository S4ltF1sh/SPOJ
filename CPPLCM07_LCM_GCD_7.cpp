//CPPLCM07 - LCM & GCD 7
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
long long BCNN(long long a, long long b)
{
    long long UCLN = __gcd(a, b);
    return a * b / UCLN;
}
void Run()
{
    long long x, y, z, n;
    cin >> x >> y >> z >> n;
    long long Check = BCNN(z, BCNN(x, y));
    long long Check1 = pow(10, n), Check2 = pow(10, n - 1);
    if (Check >= Check1)
        cout << -1 << endl;
    else
    {
        if (Check2 % Check == 0)
            cout << Check2 << endl;
        else
            cout << (Check2 / Check + 1) * Check << endl;
    }
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