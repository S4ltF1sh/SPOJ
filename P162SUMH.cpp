//P162SUMH - Round 2H - Quay số
//1  2   3   4   5   6   7    8   9   0
//   ABC DEF GHI JKL MNO PQRS TUV WXYZ
//2  3   4   5   6   7   8    9   10
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int t = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'A' || s.at(i) == 'B' || s.at(i) == 'C')
            t += 3;
        if (s.at(i) == 'D' || s.at(i) == 'E' || s.at(i) == 'F')
            t += 4;
        if (s.at(i) == 'G' || s.at(i) == 'H' || s.at(i) == 'I')
            t += 5;
        if (s.at(i) == 'J' || s.at(i) == 'K' || s.at(i) == 'L')
            t += 6;
        if (s.at(i) == 'M' || s.at(i) == 'N' || s.at(i) == 'O')
            t += 7;
        if (s.at(i) == 'P' || s.at(i) == 'Q' || s.at(i) == 'R' || s.at(i) == 'S')
            t += 8;
        if (s.at(i) == 'T' || s.at(i) == 'U' || s.at(i) == 'V')
            t += 9;
        if (s.at(i) == 'W' || s.at(i) == 'X' || s.at(i) == 'Y' || s.at(i) == 'Z')
            t += 10;
    }
    cout << t;
    return 0;
}