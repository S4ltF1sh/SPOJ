//P167PROD - ROUND 7D - ABC(WA)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '?')
        {
            for (int j = 0; j <= 9; j++)
            {
                a.at(i) = (char)j + '0';
                if (stoi(a) + stoi(b) == stoi(c))
                {
                    cout << j;
                    return 0;
                }
            }
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) == '?')
        {
            for (int j = 0; j <= 9; j++)
            {
                b.at(i) = (char)j + '0';
                if (stoi(a) + stoi(b) == stoi(c))
                {
                    cout << j;
                    return 0;
                }
            }
        }
    }
    for (int i = 0; i < c.length(); i++)
    {
        if (a.at(i) == '?')
        {
            for (int j = 0; j <= 9; j++)
            {
                c.at(i) = (char)j + '0';
                if (stoi(a) + stoi(b) == stoi(c))
                {
                    cout << j;
                    return 0;
                }
            }
        }
    }
    return 0;
}