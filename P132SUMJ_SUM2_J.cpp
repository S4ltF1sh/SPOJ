//P132SUMJ - SUM2 J - Hoán vị chữ số
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void Show(string Result)
{
    cout << Result;
}
int Find_Min(int Local_Check, string Result, char Check)
{
    int Local;
    char Min = '9' + 3;
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
void Sinh(string &Result)
{
    int Check = 0;
    for (int j = Result.size() - 2; j >= 0; j--)
    {
        if (Result.at(j) >= Result.at(j + 1))
            continue;
        else
        {
            Check = 1;
            int Local_Sw = Find_Min(j, Result, Result.at(j));
            swap(Result.at(j), Result.at(Local_Sw));
            sort(Result.begin() + j + 1, Result.begin() + Result.size());
            Show(Result);
            break;
        }
    }
    if (Check == 0)
        cout
            << "0";
}
void Run()
{
    string Result;
    cin >> Result;
    Sinh(Result);
}
int main()
{
    Run();
    return 0;
}