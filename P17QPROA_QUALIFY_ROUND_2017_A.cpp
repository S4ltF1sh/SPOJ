//P17QPROA - QUALIFY ROUND 2017 A - TỔNG HAI SỐ CHÍNH PHƯƠNG
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isCP(long long n)
{
    if ((long long)sqrt(n) * (long long)sqrt(n) == n)
        return true;
    return false;
}
void Run()
{
    long long n, Count = 0;
    cin >> n;
    for (long long i = 1; i < sqrt(n); i++)
    {
        if (isCP(n - pow(i, 2)) == true)
        {
            int Check = 1;
            //kiem tra xem cap chinh phuong do da duoc tinh chua
            for (long long j = 1; j < i; j++)
            {
                if (n - pow(i, 2) == j * j)
                {
                    Check = 0;
                    break;
                }
            }
            if (Check == 1)
                Count++;
        }
    }
    if (isCP(n) == true)
        Count++; //check th 0 + n = n voi n la CP
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