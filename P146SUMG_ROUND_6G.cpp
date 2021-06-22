//P146SUMG - ROUND 6G - Vẽ tranh
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int r, c, A, B;
    cin >> r >> c >> A >> B;
    cin.ignore();
    vector<vector<char>> Matrix(r, vector<char>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> Matrix.at(i).at(j);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int a = 0; a < A; a++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int b = 0; b < B; b++)
                {
                    cout << Matrix.at(i).at(j);
                }
            }
            cout << endl;
        }
    }
    return 0;
}