//P141SUMB - ROUND 1B - Hoán vị
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> DanhDau(5005, 0);
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    int n, tmp, Count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        DanhDau.at(tmp) = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (DanhDau.at(i) == 0)
            Count++;
    }
    cout << Count;
}