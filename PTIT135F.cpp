//PTIT135F - Đếm cửa sổ
//PTITSU1D - Bài D - PTIT Summer 1
//duyet mang
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int m, n, Count1 = 0, Count2 = 0, Count3 = 0, Count4 = 0, Count5 = 0;
    cin >> m >> n;
    vector<vector<char>> Town(m * 4 + m + 1, vector<char>(n * 4 + n + 1));
    for (int i = 0; i < m * 4 + m + 1; i++)
    {
        for (int j = 0; j < n * 4 + n + 1; j++)
        {
            cin >> Town.at(i).at(j);
        }
    }
    // for (int i = 0; i < m * 4 + m + 1; i++)
    // {
    //     for (int j = 0; j < n * 4 + n + 1; j++)
    //     {
    //         cout << Town.at(i).at(j);
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i < m * 4 + m + 1; i += 5)
    {
        for (int j = 1; j < n * 4 + n + 1; j += 5)
        {
            if (Town[i][j] == '.')
                Count1++;
            else if (Town[i][j] == '*' && Town[i + 1][j] == '*' && Town[i + 2][j] == '*' && Town[i + 3][j] == '*')
                Count5++;
            else if (Town[i][j] == '*' && Town[i + 1][j] == '*' && Town[i + 2][j] == '*')
                Count4++;
            else if (Town[i][j] == '*' && Town[i + 1][j] == '*')
                Count3++;
            else
                Count2++;
        }
    }
    cout << Count1 << " " << Count2 << " " << Count3 << " " << Count4 << " " << Count5;
    return 0;
}