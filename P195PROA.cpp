//P195PROA - Problem A - Holidays
//min khi ngay dau tien cua nam la thu 2
//max khi ngay dau tien cua nam la thu 7
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int Max(int n)
{
    int MAX = 0;
    while (n > 0)
    {
        //thu 7
        if (n >= 1)
        {
            MAX++;
            n--;
        }
        else
            break;
        //CN
        if (n >= 1)
        {
            MAX++;
            n--;
        }
        else
            break;
        if (n >= 5)
            n -= 5;
        else
            break;
    }
    return MAX;
}
int Min(int n)
{
    int MIN = 0;
    while (n > 0)
    {
        if (n >= 5)
            n -= 5;
        else
            break;
        //thu 7
        if (n >= 1)
        {
            MIN++;
            n--;
        }
        else
            break;
        //CN
        if (n >= 1)
        {
            MIN++;
            n--;
        }
        else
            break;
    }
    return MIN;
}
int main()
{
    int n;
    cin >> n;
    cout << Min(n) << " " << Max(n);
    return 0;
}