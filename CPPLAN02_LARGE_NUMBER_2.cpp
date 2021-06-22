//CPPLAN02 - LARGE NUMBER 2
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
string SubBigNum(string a, string b)
{
    string Result = "";
    while (a.length() > b.length())
        b = "0" + b;
    while (a.length() < b.length())
        a = "0" + a;
    bool Check = false;
    if (a < b)
    {
        swap(a, b);
        Check = false;
    }
    int Borrow = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int tmp = a.at(i) - b.at(i) - Borrow;
        if (tmp < 0)
        {
            tmp += 10;
            Borrow = 1;
        }
        else
            Borrow = 0;
        Result = (char)(tmp % 10 + 48) + Result;
    }
    //while(Result.length()>1 && Result[0]=='0') Result.erase(0,1);
    if (Check == true)
        Result = "-" + Result;
    return Result;
}
string AddBigNum(string a, string b)
{
    string Result = "";
    while (a.length() > b.length())
        b = "0" + b;
    while (a.length() < b.length())
        a = "0" + a;
    int Carry = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + Carry;
        Carry = tmp / 10;
        tmp %= 10;
        Result = (char)(tmp + 48) + Result;
    }
    if (Carry > 0)
        Result = "1" + Result;
    return Result;
}
void Run()
{
    string a, b, Result = "";
    cin >> a >> b;
    if (a[0] == '-' && b[0] == '-')
        Result = "-" + AddBigNum(a, b);
    else if (a[0] != '-' && b[0] != '-')
        Result = AddBigNum(a, b);
    else if (a[0] == '-' && b[0] != '-')
        Result = SubBigNum(b, a);
    else
        Result = SubBigNum(a, b);
    cout << Result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}