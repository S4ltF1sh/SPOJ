//CPPPRI02 - PRIME 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    long long n;
    cin >> n;
    long long Max = 0;
    if (n % 2 == 0)
        Max = 2;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            Max = i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        Max = n;
    cout << Max << endl;
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