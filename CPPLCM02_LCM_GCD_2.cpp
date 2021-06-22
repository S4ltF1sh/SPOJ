//CPPLCM02 - LCM & GCD 2
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long UCLN(long long a, long long b)
{
    if (a == 0 || b == 0)
        return a + b;
    return UCLN(b, a % b);
}
long long BCNN(long long a, long long b)
{
    return (a * b) / UCLN(a, b);
}
void Run()
{
    long long BCMin;
    long long n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << 2 << endl;
    else
    {
        BCMin = 2;
        for (int i = 3; i <= n; i++)
        {
            BCMin = BCNN(i, BCMin);
        }
        cout << BCMin << endl;
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