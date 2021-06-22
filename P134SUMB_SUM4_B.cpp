//P134SUMB - SUM4 B - Lát sàn
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long g, y, n, m;
    cin >> g >> y;
    n = ((4 + g) + sqrt((4 + g) * (4 + g) - 16 * (y + g))) / 4;
    m = (4 + g) / 2 - n;
    cout << m << " " << n;
    return 0;
}