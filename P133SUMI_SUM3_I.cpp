//P133SUMI - SUM3 I - Mã hóa thư
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int Find_Row(int n)
{
    int Max = 0;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i > Max && i != n)
                Max = i;
        }
    }
    if ((int)sqrt(n) * (int)sqrt(n) == n && (int)sqrt(n) != n && (int)sqrt(n) > Max)
        Max = sqrt(n);
    return Max;
}
int main()
{
    string s;
    string sOUT;
    cin >> s;
    int R = Find_Row(s.length()), C = s.length() / R;
    vector<vector<char>> Code(R, vector<char>(C));
    int Run = 0;
    for (int j = 0; j < C; j++)
    {
        for (int i = 0; i < R; i++)
        {
            Code.at(i).at(j) = s.at(Run);
            Run++;
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << Code.at(i).at(j);
        }
    }
}