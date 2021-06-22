//P18QPROA - QUALIFY ROUND 2018 A - CHIA HẾT CHO 2
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    long long n;
    cin >> n;
    int Count = 0;
    for (long long i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                Count++;
            if ((n / i) % 2 == 0)
                Count++;
        }
    }
    if ((long long)sqrt(n) * (long long)sqrt(n) == n && (long long)sqrt(n) % 2 == 0)
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