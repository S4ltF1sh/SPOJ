//PTIT014B - 2014 Bài B - Hình chữ nhật
//xet va cham 2 hcn:
//https://techmaster.vn/posts/35809/thuat-toan-kiem-tra-2-hinh-chu-nhat-co-giao-nhau-khong
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
bool Check(double x1, double y1, double x12, double y12, double x2, double y2, double x22, double y22)
{
    double w1 = x12 - x1, h1 = y12 - y1, w2 = x22 - x2, h2 = y22 - y2;
    if (x1 + w1 >= x2 && x2 + w2 >= x1 && y1 + h1 >= y2 && y2 + h2 >= y1)
        return true;
    return false;
}
void Run()
{
    double x1, y1, x12, y12, x2, y2, x22, y22;
    cin >> x1 >> y1 >> x12 >> y12 >> x2 >> y2 >> x22 >> y22;
    if (Check(x1, y1, x12, y12, x2, y2, x22, y22) == true)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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