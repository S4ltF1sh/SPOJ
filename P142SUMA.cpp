//P142SUMA - ROUND 2A - Tìm số
//P175SUMF - ROUND 5F - Số tam giác 
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, i, tmp;
    cin >> n;
    if (n == 1)
        cout << "NO" << endl;
    else
    {
        bool Check = false;
        //k ung voi n
        tmp = (-1 + sqrt(1 + 8 * n)) / 2;
        for (i = tmp + 1; i >= 0; i--)
        {
            //k ung voi tung i:
            double k;
            k = (double)(-1 + sqrt(1 - 4 * i * i - 4 * i + 8 * n)) / 2;
            //k la so nguyen va k cua n-k*(k+1)/2
            if ((int)k == k && ((k * (k + 1)) / 2 + (i * (i + 1)) / 2) == n)
            {
                Check = true;
                break;
            }
        }
        if (Check == true)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}