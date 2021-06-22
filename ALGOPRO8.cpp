//ALGOPRO8 - Đếm giày
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int r, g;
    cin >> r >> g;
    if (r > g)
    {
        cout << g << " " << (r - g) / 2;
    }
    else
    {
        cout << r << " " << (g - r) / 2;
    }
}