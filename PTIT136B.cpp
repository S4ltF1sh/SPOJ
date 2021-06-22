//PTIT136B - Quân bài
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n, m;
    long long x, y;
    cin >> n >> m;
    vector<vector<char>> Matrix(n + n, vector<char>(m + m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Matrix.at(i).at(j);
            Matrix.at(2 * n - 1 - i).at(j) = Matrix.at(i).at(j);
            Matrix.at(i).at(2 * m - 1 - j) = Matrix.at(i).at(j);
            Matrix.at(2 * n - 1 - i).at(2 * m - 1 - j) = Matrix.at(i).at(j);
        }
    }
    cin >> x >> y;
    if (Matrix.at(x - 1).at(y - 1) == '#')
        Matrix.at(x - 1).at(y - 1) = '.';
    else
        Matrix.at(x - 1).at(y - 1) = '#';
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * m; j++)
        {
            cout << Matrix.at(i).at(j);
        }
        cout << endl;
    }
}