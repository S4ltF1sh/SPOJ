//SUMSQR1 - Tổng bình phương
//Sn=1^2+2^2+3^2+ . . . +n^2=n.(n+1).(2n+1)/6
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
string Div_6(string a)
{
    string s;
    long long Carry = 0;
    for (int i = 0; i < a.length(); i++)
    {
        int tmp = (int)a.at(i) - 48;
        tmp = (Carry * 10 + tmp);
        s.push_back((char)(tmp / 6) + 48);
        Carry = tmp % 6;
    }
    while (s.at(0) == '0')
        s.erase(0, 1);
    return s;
}
int main()
{
    long long n;
    cin >> n;
    string tmp = MulBigNum(to_string(2 * n + 1), MulBigNum(to_string(n), to_string(n + 1)));
    tmp = Div_6(tmp);
    cout << tmp;
}