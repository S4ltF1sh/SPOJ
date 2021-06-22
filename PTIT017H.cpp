//PTIT017H - ACM PTIT 2017 H - SỐ ĐẶC BIỆT HOÀN HẢO
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long d(long long n)
{
    long long Sum = 0;
    for (long long i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            Sum += i;
            Sum += n / i;
        }
    }
    long long k = sqrt(n);
    if (k * k == n)
        Sum += k;
    return Sum;
}
void Run()
{
    long long n;
    cin >> n;
    if (d(d(n)) == 2 * n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}