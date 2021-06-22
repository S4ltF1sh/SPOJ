//P171PROC - ROUND 1C - Đi dạo
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, l;
    cin >> n >> l;
    vector<double> Local(n);
    for (long long i = 0; i < n; i++)
        cin >> Local.at(i);
    sort(Local.begin(), Local.end());
    double Compare;
    if (Local.at(0) - 0 > l - Local.at(n - 1))
        Compare = Local.at(0) - 0;
    else
        Compare = l - Local.at(n - 1);
    double DisMax = -1000000005.0;
    for (long long i = 1; i < n; i++)
    {
        double tmp = (Local.at(i) - Local.at(i - 1)) / 2.0;
        if (DisMax < tmp)
            DisMax = tmp;
    }
    if (DisMax > Compare)
        cout << fixed << setprecision(10) << DisMax;
    else
        cout << fixed << setprecision(10) << Compare;
}