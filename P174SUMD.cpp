//P174SUMD - ROUND 4D - Năm 2017
//2017 khong phai nam nhuan:
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int x, y, nDays, nWeeks = 0;
    cin >> x >> y;
    if (x == 2)
        nDays = 28;
    else if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
        nDays = 31;
    else
        nDays = 30;
    nWeeks++;
    nDays -= (8 - y);
    while (1)
    {
        nDays -= 7;
        if (nDays < 0)
        {
            nDays += 7;
            break;
        }
        nWeeks++;
    }
    if (nDays > 0)
        nWeeks++;
    cout << nWeeks;
}