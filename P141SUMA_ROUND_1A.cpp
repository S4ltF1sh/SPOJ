//P141SUMA - ROUND 1A - Đi đường nào
//http://gacsach.vn/sach/giai-cac-bai-toan-hinh-hoc-trong-tin-hoc-7.html
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long x1, x2, x3, y1, y2, y3, CCW;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    CCW = (x2 - x1) * (y3 - y2) - (x3 - x2) * (y2 - y1);
    if (CCW == 0)
        cout << "TOWARDS";
    else if (CCW > 0)
        cout << "LEFT";
    else
        cout << "RIGHT";
}