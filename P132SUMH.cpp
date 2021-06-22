//P132SUMH - SUM2 H - Kẻ gác cổng
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
struct DOG_TIME
{
    long long Angry;
    long long Sleep;
    long long T;
};
int main()
{
    DOG_TIME Dog1, Dog2;
    long long a, b, c, d, tmp, Check;
    cin >> a >> b >> c >> d;
    Dog1.Angry = a;
    Dog1.Sleep = b;
    Dog1.T = a + b;
    Dog2.Angry = c;
    Dog2.Sleep = d;
    Dog2.T = c + d;
    for (int i = 1; i <= 3; i++)
    {
        long long Count = 0;
        cin >> tmp;
        Check = tmp % Dog1.T;
        if (Check > 0 && Check <= Dog1.Angry)
            Count++;
        Check = tmp % Dog2.T;
        if (Check > 0 && Check <= Dog2.Angry)
            Count++;
        if (Count == 0)
            cout << "none";
        else if (Count == 1)
            cout << "one";
        else
            cout << "both";
        cout << endl;
    }
}