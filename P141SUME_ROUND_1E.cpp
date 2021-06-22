//P141SUME - ROUND 1E - Điện tâm đồ
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Check = 1;
    vector<int> Data(n);
    int Min = INT_MAX;
    int Max = INT_MIN;
    int Sum = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Data.at(i);
        c += Data.at(i);
        if (Check == 1)
        {
            Sum += Data.at(i);
            Check = 0;
        }
        else if (Check == 0)
        {
            Sum -= Data.at(i);
            Check = 1;
        }
        if (Sum > Max)
            Max = Sum;
        if (Sum < Min)
            Min = Sum;
    }
    Check = 1;
    int r, Start = Max - 1;
    if (Min > 0)
        r = Max;
    else
        r = abs(Max - Min);
    int cRun = 0;
    vector<vector<char>> DTD(r, vector<char>(c));
    for (int i = 0; i < n; i++)
    {
        if (Check == 1)
        {
            for (int j = 1; j <= Data.at(i); j++)
            {
                DTD[Start][cRun] = '/';
                Start--;
                cRun++;
            }
            Start++;
            Check = 0;
        }
        else if (Check == 0)
        {
            for (int j = 1; j <= Data.at(i); j++)
            {
                DTD[Start][cRun] = '\\';
                Start++;
                cRun++;
            }
            Start--;
            Check = 1;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (DTD[i][j] == '/' || DTD[i][j] == '\\')
                cout << DTD[i][j];
            else
                cout << " ";
        }
        cout << endl;
    }
}