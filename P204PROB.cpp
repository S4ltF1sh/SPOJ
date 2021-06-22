//P204PROB - Tính tổng Dãy Số
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, nl, nc;
    cin >> n;
    if (n % 2 == 0)
    {
        nl = n - 1;
        nc = n;
        nl = (nl - 1) / 2 + 1;
        nc = nc / 2;
        cout << nc * (n + 2) / 2 + nl * (-n) / 2;
    }
    else
    {
        nl = n;
        nc = n - 1;
        nl = (nl - 1) / 2 + 1;
        nc = nc / 2;
        cout << nc * (n + 1) / 2 + nl * (-n - 1) / 2;
    }
}