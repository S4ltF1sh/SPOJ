//P164PROD - ROUND 4D - Cơ số 3

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
string Change_10_To_3(long long n)
{
    string tmp;
    string s = "";
    while (n > 0)
    {
        tmp.push_back((char)(n % 3) + '0');
        n /= 3;
    }
    for (int i = tmp.length() - 1; i >= 0; i--)
        s.push_back(tmp.at(i));
    return s;
}
long long Change_3_To_10(string s)
{
    long long n = s.at(0) - '0';
    for (int i = 1; i < s.length(); i++)
        n = n * 3 + (long long)(s.at(i) - '0');
    return n;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string b = "";
    long long a, c;
    cin >> a >> c;
    string a1 = Change_10_To_3(a);
    string c1 = Change_10_To_3(c);
    while (a1.length() < c1.length())
        a1 = "0" + a1;
    while (a1.length() > c1.length())
        c1 = "0" + c1;
    for (int i = 0; i < a1.length(); i++)
    {
        if (c1.at(i) == '0')
        {
            if (a1.at(i) == '0')
                b += '0';
            else if (a1.at(i) == '1')
                b += '2';
            else
                b += '1';
        }
        else if (c1.at(i) == '1')
        {
            if (a1.at(i) == '0')
                b += '1';
            else if (a1.at(i) == '1')
                b += '0';
            else
                b += '2';
        }
        else if (c1.at(i) == '2')
        {
            if (a1.at(i) == '0')
                b += '2';
            else if (a1.at(i) == '1')
                b += '1';
            else
                b += '0';
        }
    }
    while (b.at(0) == '0')
        b.erase(0, 1);
    cout << Change_3_To_10(b);
}

// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// #include <algorithm>
// using namespace std;
// string Change_10_To_3(long long n)
// {
//     string tmp;
//     while (n > 0)
//     {
//         tmp.push_back((char)(n % 3) + '0');
//         n /= 3;
//     }
//     return tmp;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long a, c, Res = 0;
//     cin >> a >> c;
//     string a1 = Change_10_To_3(a);
//     string c1 = Change_10_To_3(c);
//     while (a1.length() < c1.length())
//         a1 += "0";
//     while (a1.length() > c1.length())
//         c1 += "0";
//     for (int i = a1.length() - 1; i >= 0; i--)
//     {
//         int tmp = (((int)c1.at(i) - 48) - ((int)a1.at(i) - 48) + 3) % 3;
//         Res = Res * 3 + tmp;
//     }
//     cout << Res;
// }