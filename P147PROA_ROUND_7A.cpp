//P147PROA - ROUND 7A - Hình hộp chữ nhật
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << 4 * (sqrt(a * b * c) / a + sqrt(a * b * c) / b + sqrt(a * b * c) / c);
    return 0;
}