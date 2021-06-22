//P161SUMH - ROUND 1H - Bàn cờ
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<char>> Table(n + 2, vector<char>(n + 2));
    for (int i = 0; i < n + 2; i++)
        for (int j = 0; j < n + 2; j++)
        {
            if (i == 0 || i == n + 1 || j == 0 || j == n + 1)
                Table.at(i).at(j) = 'x';
            else
                cin >> Table.at(i).at(j);
        }
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < n + 1; j++)
        {
            int Count = 0;
            if (Table.at(i).at(j + 1) == 'o')
                Count++;
            if (Table.at(i).at(j - 1) == 'o')
                Count++;
            if (Table.at(i + 1).at(j) == 'o')
                Count++;
            if (Table.at(i - 1).at(j) == 'o')
                Count++;
            if (Count % 2 == 1)
            {
                cout << "NO";
                return 0;
            }
        }
    cout << "YES";
    return 0;
}