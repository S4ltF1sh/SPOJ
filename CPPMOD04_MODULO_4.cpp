//CPPMOD04 - MODULO 4
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    long long n, k, Sum = 0;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        Sum += i % k;
    }
    if (Sum == k)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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