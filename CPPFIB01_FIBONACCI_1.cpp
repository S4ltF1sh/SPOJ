//CPPFIB01 - FIBONACCI 1
#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007
int main()
{
    long long t;
    cin >> t;
    vector<long long> isFibo;
    long long f1 = 0, f2 = 1, fibo;
    isFibo.push_back(f1);
    isFibo.push_back(f2);
    for (long long i = 3; i <= 1001; i++)
    {
        fibo = f1 + f2;
        fibo %= MOD;
        isFibo.push_back(fibo);
        f1 = f2;
        f2 = fibo;
    }
    while (t--)
    {
        long long n;
        cin >> n;
        cout << isFibo.at(n) << endl;
    }
}