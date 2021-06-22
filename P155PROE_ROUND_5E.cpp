//P155PROE - ROUND 5E - Điện tử số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int Result = 1;
    for (int i = 0; i < 2; i++)
    {
        if (s.at(i) == '0')
            Result *= 2;
        else if (s.at(i) == '1')
            Result *= 7;
        else if (s.at(i) == '2')
            Result *= 2;
        else if (s.at(i) == '3')
            Result *= 3;
        else if (s.at(i) == '4')
            Result *= 3;
        else if (s.at(i) == '5')
            Result *= 4;
        else if (s.at(i) == '6')
            Result *= 2;
        else if (s.at(i) == '7')
            Result *= 5;
        else if (s.at(i) == '8')
            Result *= 1;
        else
            Result *= 2;
    }
    cout << Result;
    return 0;
}