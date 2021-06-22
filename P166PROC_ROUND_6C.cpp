//P166PROC - ROUND 6C - Bánh sinh nhật
//dung ngu khi dung giai thua tinh to hop :)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<char>> BirthDay_Cake(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> BirthDay_Cake.at(i).at(j);
        }
    }
    long long Happy_Point = 0;
    //search Row
    for (int i = 0; i < n; i++)
    {
        long long Count = 0;
        for (int j = 0; j < n; j++)
        {
            if (BirthDay_Cake.at(i).at(j) == 'C')
                Count++;
        }
        if (Count >= 2)
            Happy_Point += Count * (Count - 1) / 2;
    }
    //search Col
    for (int j = 0; j < n; j++)
    {
        long long Count = 0;
        for (int i = 0; i < n; i++)
        {
            if (BirthDay_Cake.at(i).at(j) == 'C')
                Count++;
        }
        if (Count >= 2)
            Happy_Point += Count * (Count - 1) / 2;
    }
    cout << Happy_Point;
    return 0;
}