//P182PROA - ROUND 2A - Cuốn ngôn tình đầu tiên
//so trang sach doc lai i da bao gom o trong v0 + n*a
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
    int c, v0, v1, a, i, Count = 1, Sum;
    cin >> c >> v0 >> v1 >> a >> i;
    c -= v0;
    while (1)
    {
        if (c <= 0)
        {
            cout << Count;
            return 0;
        }
        Count++;
        v0 += a;
        if (v0 > v1)
            v0 = v1;
        c -= (v0 - i);
    }
}