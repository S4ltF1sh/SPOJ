//PTIT127G - Tách số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
vector<string> Number;
bool cmp(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if ((int)s1.at(i) - 48 > (int)s2.at(i) - 48)
                return false;
            else if ((int)s1.at(i) - 48 < (int)s2.at(i) - 48)
                return true;
        }
    }
    return s1.length() < s2.length();
}
void Run()
{
    string s;
    getline(cin, s);
    s.push_back('.');
    string tmp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= '0' && s.at(i) <= '9')
            tmp += s.at(i);
        else
        {
            if (tmp != "")
            {
                while (tmp.at(0) == '0')
                {
                    tmp.erase(tmp.begin());
                    if (tmp == "")
                        break;
                }
                if (tmp != "")
                    Number.push_back(tmp);
                else
                    Number.push_back("0");
                tmp = "";
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
    sort(Number.begin(), Number.end(), cmp);
    for (int i = 0; i < Number.size(); i++)
    {
        cout << Number.at(i) << endl;
    }
    return 0;
}