//P134SUME - SUM4 E - Diện tích hình chữ nhật lớn nhất
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int FootStep[4];
    for (int i = 0; i < 4; i++)
        cin >> FootStep[i];
    sort(FootStep, FootStep + 4);
    cout << FootStep[0] * FootStep[2];
    return 0;
}