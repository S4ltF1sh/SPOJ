//BCPERMU - Liệt kê hoán vị (Cơ bản)
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void HoanVi1(vector<int> &Result)
{
    for (int i = 0; i < Result.size(); i++)
    {
        Result.at(i) = i + 1;
    }
}
void Show(vector<int> &Result)
{
    for (int i = 0; i < Result.size(); i++)
    {
        cout << Result.at(i);
    }
    cout << endl;
}
int Find_Min(int Local_Check, vector<int> Result, int Check)
{
    int Local, Min = 999;
    for (int i = Local_Check + 1; i < Result.size(); i++)
    {
        if (Result.at(i) < Min && Result.at(i) > Check)
        {
            Min = Result.at(i);
            Local = i;
        }
    }
    return Local;
}
void Sinh(vector<int> &Result, int n)
{
    int Check = 0;
    while (true)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            Check = 0;
            if (Result.at(j) > Result.at(j + 1))
                continue;
            else
            {
                Check = 1;
                int Local_Sw = Find_Min(j, Result, Result.at(j));
                swap(Result.at(j), Result.at(Local_Sw));
                sort(Result.begin() + j + 1, Result.begin() + n);
                Show(Result);
                break;
            }
            if (Check == 0)
                break;
        }
        if (Check == 0)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> Result(n);
    HoanVi1(Result);
    Show(Result);
    Sinh(Result, n);
    return 0;
}