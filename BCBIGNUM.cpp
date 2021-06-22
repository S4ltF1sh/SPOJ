//BCBIGNUM - Xử lý số nguyên lớn
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
string MulBigNum(string a, string b)
{
    int len1 = a.size();
    int len2 = b.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<int> Res(len1 + len2, 0);
    int i_a = 0;
    int i_b = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = a.at(i) - '0';
        i_b = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = b.at(j) - '0';
            int sum = n1 * n2 + Res.at(i_a + i_b) + carry;
            carry = sum / 10;
            Res.at(i_a + i_b) = sum % 10;
            i_b++;
        }
        if (carry > 0)
            Res.at(i_a + i_b) += carry;
        i_a++;
    }
    int i = Res.size() - 1;
    while (i >= 0 && Res.at(i) == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
        s += to_string(Res.at(i--));
    return s;
}
string AddBigNum(string a, string b)
{
    string Res = "";
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
        Res = (char)(tmp + 48) + Res;
    }
    if (Carry > 0)
        Res = "1" + Res;
    return Res;
}
string SubBigNum(string a, string b)
{
    int Check = 0;
    string Res = "";
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;
    if (a < b) //lay so lon tru so be
    {
        Check = 1;
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
        Res = (char)(tmp % 10 + 48) + Res;
    }
    while (Res.at(0) == '0' && Res.length() > 1)
        Res.erase(0, 1);
    if (Check == 1)
        Res = "-" + Res;
    return Res;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << AddBigNum(a, b) << endl
         << SubBigNum(a, b) << endl
         << MulBigNum(a, b);
}