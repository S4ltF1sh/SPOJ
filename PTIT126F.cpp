//PTIT126F - Di chuyển trái phải(chua nghi ra)
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int Left = 0, Right = 0, Max = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'R')
            Right++;
        if (s.at(i) == 'L')
            Left++;
        if (s.at(i) == '?')
        {
            if (Right - Max > Left - Max)
                Max += Right - Max;
            else
                Max += Left - Max;
        }
    }
    cout << Max;
}