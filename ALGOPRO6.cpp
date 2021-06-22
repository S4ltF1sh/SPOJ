//ALGOPRO6 - Giá trị của năm
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int Sum_Each(int n)
{
    int Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    return Sum;
}
int main()
{
    int y;
    cin >> y;
    int Value = 0;
    if (y % 100 != 0)
    {
        if (y % 4 == 0)
        {
            Value += 366 * Sum_Each(y);
            Value += (1 * 31 + 2 * 29 + 3 * 31 + 4 * 30 + 5 * 31 + 6 * 30 + 7 * 31 + 8 * 31 + 9 * 30 + 1 * 31 + 2 * 30 + 3 * 31);
            Value += 7 * 172 + 4 * 168 + 1 * 165;
            cout << Value;
        }
        else
        {
            Value += 365 * Sum_Each(y);
            Value += (1 * 31 + 2 * 28 + 3 * 31 + 4 * 30 + 5 * 31 + 6 * 30 + 7 * 31 + 8 * 31 + 9 * 30 + 1 * 31 + 2 * 30 + 3 * 31);
            Value += 7 * 172 + 4 * 168 + 1 * 154;
            cout << Value;
        }
    }
    else
    {
        if (y % 400 == 0)
        {
            Value += 366 * Sum_Each(y);
            Value += (1 * 31 + 2 * 29 + 3 * 31 + 4 * 30 + 5 * 31 + 6 * 30 + 7 * 31 + 8 * 31 + 9 * 30 + 1 * 31 + 2 * 30 + 3 * 31);
            Value += 7 * 172 + 4 * 168 + 1 * 165;
            cout << Value;
        }
        else
        {
            Value += 365 * Sum_Each(y);
            Value += (1 * 31 + 2 * 28 + 3 * 31 + 4 * 30 + 5 * 31 + 6 * 30 + 7 * 31 + 8 * 31 + 9 * 30 + 1 * 31 + 2 * 30 + 3 * 31);
            Value += 7 * 172 + 4 * 168 + 1 * 154;
            cout << Value;
        }
    }
}