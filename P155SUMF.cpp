//P155SUMF - ROUND 5F - Tìm lại dãy số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> B.at(i);
        B.at(i) *= (i + 1);
    }
    cout << B.at(0) << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << B.at(i + 1) - B.at(i) << " ";
    }
}