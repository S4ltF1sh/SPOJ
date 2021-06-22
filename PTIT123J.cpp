//PTIT123J - Dấu ngoặc đúng
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
stack<char> Check;
bool CheckTF(string s)
{
    while (!Check.empty())
        Check.pop();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            Check.push(0);
        else if (s[i] == '[')
            Check.push(1);
        else if (s[i] == ')')
        {
            if (!Check.empty() && Check.top() == 0)
                Check.pop();
            else
                return 0;
        }
        else if (s[i] == ']')
        {
            if (!Check.empty() && Check.top() == 1)
                Check.pop();
            else
                return 0;
        }
    }
    if (Check.empty())
        return 1;
    return 0;
}
int main()
{
    string s;
    while (1)
    {
        getline(cin, s);
        if (s == ".")
            return 0;
        if (CheckTF(s) == true)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}