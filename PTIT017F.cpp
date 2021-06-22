//PTIT017F - ACM PTIT 2017 F - CHIA HẾT CHO 36
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool Div_9(string s)
{
    long long SUM = 0;
    for (long long i = 0; i < s.length(); i++)
        SUM += (long long)(s.at(i) - '0');
    if (SUM % 9 == 0)
        return true;
    return false;
}
bool Div_4(string s)
{
    int len = s.size();
    if (s.at(len - 1) == '0' && s.at(len - 2) == '0')
        return true;
    string tmp;
    tmp.push_back(s.at(len - 2));
    tmp.push_back(s.at(len - 1));
    if (stoi(tmp) % 4 == 0)
        return true;
    return false;
}
void Run()
{
    string s;
    cin >> s;
    if (s == "0")
        cout << "YES\n";
    else
    {
        if (Div_4(s) && Div_9(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}