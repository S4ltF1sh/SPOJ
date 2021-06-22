//P154SUMC - ROUND 4C - Trai hay gái
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> Tanso(300, 0);
int main()
{
    string sIN;
    getline(cin, sIN);
    for (int i = 0; i < sIN.length(); i++)
    {
        Tanso.at(sIN.at(i))++;
    }
    int Count = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (Tanso.at(i) != 0)
            Count++;
    }
    if (Count % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}