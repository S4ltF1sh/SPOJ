//P141PROJ - ROUND 1J - Test IQ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<vector<char>> Catton(4, vector<char>(4));
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> Catton.at(i).at(j);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int Same = 0, Diff = 0;
            char Check = Catton.at(i).at(j);
            if (Catton.at(i).at(j + 1) == Check)
                Same++;
            else
                Diff++;
            if (Catton.at(i + 1).at(j) == Check)
                Same++;
            else
                Diff++;
            if (Catton.at(i + 1).at(j + 1) == Check)
                Same++;
            else
                Diff++;
            if (Same == 3 || Diff == 3 || Diff == 1)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}