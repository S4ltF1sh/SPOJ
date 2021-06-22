//CPPPRI09 - PRIME 9
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Show(long long n)
{
    int Count = 0;
    if (n % 2 == 0)
    {
        cout << 2 << " ";
        while (n % 2 == 0)
        {
            n /= 2;
            Count++;
        }
        cout << Count << " ";
        Count = 0;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n /= i;
                Count++;
            }
            cout << Count << " ";
            Count = 0;
        }
    }
    if (n > 1)
        cout << n << " " << 1;
    cout << endl;
}
void Run()
{
    long long n;
    cin >> n;
    Show(n);
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