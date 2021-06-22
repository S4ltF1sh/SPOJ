//PTIT126A - Cột có tích lớn nhất(WA)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    long long Ai = 1;
    int index;
};
bool cmp(Data x, Data y)
{
    if (x.Ai == y.Ai)
        return x.index < y.index;
    else
        return x.Ai < y.Ai;
}
int main()
{
    int m, n;
    while (1)
    {
        cin >> m >> n;
        if (m == 0 && n == 0)
            return 0;
        vector<vector<long long>> Matrix(n, vector<long long>(m));
        vector<Data> Result(m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> Matrix.at(i).at(j);
                Result.at(j).Ai *= Matrix.at(i).at(j);
                Result.at(j).index = j + 1;
            }
        }
        sort(Result.begin(), Result.end(), cmp);
        for (int i = 0; i < m; i++)
        {
            cout << Result.at(i).index << " " << Result.at(i).Ai << endl;
        }
        cout << Result.at(m - 1).index << endl;
    }
    return 0;
}
