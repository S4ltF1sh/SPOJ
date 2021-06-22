//CPPLAN01 - LARGE NUMBER 1
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
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;
    if (a < b)
    {
        swap(a, b);
    }
    int borrow = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int tmp = a[i] - b[i] - borrow;
        if (tmp < 0)
        {
            tmp += 10;
            borrow = 1;
        }
        else
            borrow = 0;
        Result = (char)(tmp % 10 + 48) + Result;
    }
    //while(Result.length()>1 && Result[0]=='0') Result.erase(0,1);
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
    string a;
    string b;
    string Result;
    cin >> a >> b; //cin duoc getline thi khong dcm
    if (b[0] == '-')
    {
        b.erase(b.begin(), b.begin() + 1);
        Result = AddBigNum(a, b);
    }
    else
        Result = SubBigNum(a, b);
    cout << Result << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}