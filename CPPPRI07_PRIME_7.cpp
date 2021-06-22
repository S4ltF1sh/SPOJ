//CPPPRI07 - PRIME 7
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isSphenic(long long n)
{
    int Count = 0;
    int Check = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        Count++;
        Check++;
        if (Check > 1)
            return false;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            Count++;
            int Check = 0;
            while (n % i == 0)
            {
                n /= i;
                Check++;
                if (Check > 1)
                    return false;
            }
        }
    }
    if (n > 1)
        Count++;
    if (Count == 3)
        return true;
    return false;
}
void Run()
{
    long long n;
    cin >> n;
    if (isSphenic(n) == true)
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