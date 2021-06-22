//BCDAISY - Chú bò hư hỏng(20/100)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n, k, tmp1, tmp2, Check = 0;
    cin >> n >> k;
    vector<int> DanhDau(n + 1, 0);
    for (int i = 1; i <= k; i++)
    {
        cin >> tmp1 >> tmp2;
        if (tmp1 == 1)
            DanhDau.at(tmp2) = 1;
        else if (tmp2 == 1)
            DanhDau.at(tmp1) = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        if (DanhDau.at(i) != 1)
        {
            cout << i << endl;
            Check = 1;
        }
    }
    if (Check == 0)
        cout << 0;
}