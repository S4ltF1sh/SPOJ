//P192PROB - Problem B - Trang trí cây đào ngày tết
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = x; i >= 1; i--)
        if (i + 1 <= y && i + 2 <= z)
        {
            cout << 3 * i + 3;
            return 0;
        }
}