//P163PROG - ROUND 3G - Bảng nhân
#include <iostream>
using namespace std;
int main()
{
    long long n, x, Count = 0;
    cin >> n >> x;
    for (long long i = 1; i <= n; i++)
    {
        if (x % i == 0 && i * n >= x)
            Count++;
    }
    cout << Count;
}