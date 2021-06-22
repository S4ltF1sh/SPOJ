//PTIT016E - ACM PTIT 2016 E - Kỳ thi ACM/ICPC
//n be For trau :v (n<=100)
#include <stdio.h>
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
    long long s[105][12], Res = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 11; j++)
            cin >> s[i][j];
    for (int x = 0; x < n; x++)
        for (int y = x + 1; y < n; y++)
            for (int z = y + 1; z < n; z++)
            {
                tmp = 0;
                for (int i = 0; i < 11; i++)
                    tmp += max(s[x][i], max(s[y][i], s[z][i]));
                if (Res < tmp)
                    Res = tmp;
            }
    cout << Res;
}