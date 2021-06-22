//P204PROE - Sơn tường
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
    int n, m, stC, enC, stR, enR, Check = 0;
    cin >> n >> m;
    vector<vector<char>> Wall(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Wall.at(i).at(j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Wall.at(i).at(j) == 'B')
            {
                Check = 1;
                stC = j;
                stR = i;
                for (int k = j + 1; k < m; k++)
                {
                    if (Wall.at(i).at(k) == 'W')
                    {
                        enC = k - 1;
                        break;
                    }
                }
                for (int k = i + 1; k < n; k++)
                {
                    if (Wall.at(k).at(j) == 'W')
                    {
                        enR = k - 1;
                        break;
                    }
                }
            }
            if (Check == 1)
            {
                cout << (stR + enR) / 2 + 1 << " " << (stC + enC) / 2 + 1;
                return 0;
            }
        }
    }
}