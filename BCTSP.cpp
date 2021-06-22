//BCTSP - Travelling Salesman Problem
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long long Sum = 0;
long long Val[17][17];
int City[17];
vector<int> Visited(17, 0);
int n;
long long BestCF = 1000000009;
long long ValMin = 1000000009;
void Init()
{
    City[1] = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> Val[i][j];
            if (i != j && Val[i][j] < ValMin)
                ValMin = Val[i][j];
        }
}
//sinh hoan vi bang quay lui va nhanh can:
void Try(int i)
{
    //Check Bound:
    if (Sum + ValMin * (n - i + 1) >= BestCF)
        return;
    for (int j = 2; j <= n; j++)
    {
        if (Visited[j] == 0)
        {
            City[i] = j;
            Visited[j] = 1;
            Sum += Val[City[i - 1]][City[i]];
            if (i == n)
            {
                if (Sum + Val[City[n]][City[1]] < BestCF)
                    BestCF = Sum + Val[City[n]][City[1]];
            }
            else
                Try(i + 1);
            Visited[j] = 0;
            Sum -= Val[City[i - 1]][City[i]];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Init();
    //khong di dau ca:
    if (n == 1)
        cout << 0;
    else
    {
        Try(2);
        cout << BestCF;
    }
}