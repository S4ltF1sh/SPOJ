//P155SUMG - ROUND 5G - Trò chơi với que tính
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n, m, Count = 0;
    cin >> n >> m;
    while (1)
    {
        if (n == 0 || m == 0)
            break;
        n--;
        m--;
        Count++;
    }
    if (Count % 2 == 1)
        cout << "Xavi";
    else
        cout << "Wilshere";
}