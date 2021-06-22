//P192PROC - Problem C - CLB Bắn Cung
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    int n;
    cin >> n;
    vector<int> Power(n);
    for (int i = 0; i < n; i++)
        cin >> Power.at(i);
    int tmp = 0;
    long long Sum = 0;
    for (int i = 1; i < n; i++)
    {
        tmp += Power.at(i - 1);
        Sum += Power.at(i) * tmp;
    }
    cout << Sum;
}