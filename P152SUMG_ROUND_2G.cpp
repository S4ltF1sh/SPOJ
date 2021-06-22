//P152SUMG - ROUND 2G - Số nguyên tố kế tiếp
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<bool> Check(1e6 + 1, true);

void isEtosthenes(vector<bool> &Check)
{
    Check.at(0) = Check.at(1) = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (Check.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                Check.at(j) = false;
            }
        }
    }
}
int main()
{
    int x, y, Count = 0;
    cin >> x >> y;
    isEtosthenes(Check);
    for (int i = x + 1; i <= 50; i++)
    {
        if (Check.at(i) == true)
            Count++;
        if (Count > 1)
        {
            cout << "NO";
            return 0;
        }
        if (Check.at(i) == true && y == i)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}