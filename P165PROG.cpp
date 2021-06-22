//P165PROG - ROUND 5G - Số nguyên
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
bool Greater(string x, string y)
{
    if (x.at(0) == '-' && y.at(0) != '-')
        return false;
    if (x.at(0) != '-' && y.at(0) == '-')
        return true;
    if (x == y)
        return true;

    int len_x = x.length();
    int len_y = y.length();

    if (x.at(0) != '-' && y.at(0) != '-')
    {
        if (len_x > len_y)
            return true;
        else if (len_x == len_y && x > y)
            return true;
        return false;
    }

    if (len_x > len_y)
        return false;
    else if (len_x == len_y && x > y)
        return false;
    return true;
}
void Run()
{
    string s;
    cin >> s;
    if (Greater(s, "-128") && Greater("127", s))
        cout << "byte";
    else if (Greater(s, "-32768") && Greater("32767", s))
        cout << "short";
    else if (Greater(s, "-2147483648") && Greater("2147483647", s))
        cout << "int";
    else if (Greater(s, "-9223372036854775808") && Greater("9223372036854775808", s))
        cout << "long";
    else
        cout << "BigInteger";
}
int main() { Run(); }
