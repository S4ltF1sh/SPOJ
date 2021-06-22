//SSAM019K - SỐ SMITH
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long Sum_Chu_So(long long n)
{
    if (n < 10)
        return n;
    long long Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    return Sum;
}
long long Sum_Nhan_Tu(long long n)
{
    long long Sum = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        Sum += 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                Sum += Sum_Chu_So(i);
            }
        }
    }
    if (n > 1)
        Sum += Sum_Chu_So(n);
    return Sum;
}
int main()
{
    long long n;
    cin >> n;
    if (Sum_Chu_So(n) == Sum_Nhan_Tu(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}