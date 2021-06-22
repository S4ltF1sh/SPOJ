//P142PROH - ROUND 2H - Đàn kiến
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    cin.ignore();
    vector<vector<char>> Socola(r, vector<char>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> Socola.at(i).at(j);
        }
    }
    //check Row :
    for (int i = 0; i < r; i++)
    {
        int Check = 1;
        for (int j = 0; j < c; j++)
        {
            //neu co qua dau thi break
            if (Socola.at(i).at(j) == 'S')
            {
                Check = 0;
                break;
            }
        }
        //neu khong co qua dau thi danh dau hang do da duoc an
        if (Check == 1)
            for (int j = 0; j < c; j++)
                Socola.at(i).at(j) = 'E'; //E: Eat :))
    }
    //check Col :
    for (int j = 0; j < c; j++)
    {
        int Check = 1;
        for (int i = 0; i < r; i++)
        {
            //neu co qua dau thi break
            if (Socola.at(i).at(j) == 'S')
            {
                Check = 0;
                break;
            }
        }
        //neu khong co qua dau thi danh dau cot do da duoc an
        if (Check == 1)
            for (int i = 0; i < r; i++)
                Socola.at(i).at(j) = 'E'; //E: Eat :))
    }
    int Count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (Socola.at(i).at(j) == 'E')
                Count++;
        }
    }
    cout << Count;
    return 0;
}