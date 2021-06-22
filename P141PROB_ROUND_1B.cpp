//P141PROB - ROUND 1B - Tuần lễ công dân(chua xong)
//~do` mi`n
#include <iostream>
#include <vector>
using namespace std;
void Enter_Matrix(vector<vector<char>> &Matrix, int m, int n)
{
    for (int i = 0; i <= m + 1; i++)
    {
        for (int j = 0; j <= n + 1; j++)
        {
            if (i == 0 || j == 0 || i == m + 1 || j == n + 1)
            {
                Matrix.at(i).at(j) = '0';
            }
            else
                cin >> Matrix.at(i).at(j);
        }
    }
}
void Show_Result(vector<vector<char>> Matrix, int m, int n)
{
    int Max = 0;
    vector<vector<int>> Result(m + 5, vector<int>(n + 5));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int Count = 0;
            if (Matrix.at(i).at(j) == '.')
            {
                if (Matrix.at(i).at(j + 1) == 'o')
                    Count++;
                if (Matrix.at(i).at(j - 1) == 'o')
                    Count++;
                if (Matrix.at(i + 1).at(j + 1) == 'o')
                    Count++;
                if (Matrix.at(i - 1).at(j - 1) == 'o')
                    Count++;
                if (Matrix.at(i + 1).at(j - 1) == 'o')
                    Count++;
                if (Matrix.at(i - 1).at(j + 1) == 'o')
                    Count++;
                if (Matrix.at(i + 1).at(j) == 'o')
                    Count++;
                if (Matrix.at(i - 1).at(j) == 'o')
                    Count++;
                if (Max < Count)
                    Max = Count;
            }
        }
    }
    cout << Max;
}
void Run(int m, int n)
{
    vector<vector<char>> Matrix(m + 5, vector<char>(n + 5));
    Enter_Matrix(Matrix, m, n);
    Show_Result(Matrix, m, n);
}
int main()
{
    int m, n;
    cin >> m >> n;
    cin.ignore();
    if (m == 0 && n == 0)
        return 0;
    Run(m, n);
    return 0;
}