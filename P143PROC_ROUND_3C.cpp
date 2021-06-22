//P143PROC - ROUND 3C - Đi chợ
#include <iostream>
using namespace std;
int main()
{
    long long y, k, n;
    cin >> y >> k >> n;
    long long Run = n / k;
    int Check = 0;
    for (long long i = 1; i <= Run; i++)
    {
        if (k * i > y)
        {
            cout << k * i - y << " ";
            Check = 1;
        }
    }
    if (Check == 0)
        cout << -1;
    return 0;
}