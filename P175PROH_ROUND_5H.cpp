//P175PROH - ROUND 5H - Gặp bạn cũ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long l1, r1, l2, r2, k, Time = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (l1 >= l2 && r1 <= r2 && l1 <= r2)
    {
        Time = r1 - l1 + 1;
        if (k <= r1 && k >= l1)
            Time--;
    }

    if (l1 <= l2 && l2 <= r1 && r2 <= r1)
    {
        Time = r2 - l2 + 1;
        if (k <= r2 && k >= l2)
            Time--;
    }

    if (l1 >= l2 && l1 <= r2 && r1 >= r2)
    {
        Time = r2 - l1 + 1;
        if (k <= r2 && k >= l1)
            Time--;
    }

    if (l1 <= l2 && r1 <= r2 && l2 <= r1)
    {
        Time = r1 - l2 + 1;
        if (k <= r1 && k >= l2)
            Time--;
    }
    cout << Time;
}
