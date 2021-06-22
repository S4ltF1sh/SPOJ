//P156PROE - ROUND 6E - Phép dịch
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
string Form = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
void Trans(char &Check, int n)
{
    for (int i = 0; i < Form.length(); i++)
    {
        if (Check == Form.at(i))
        {
            Check = Form.at((i + n) % 28);
            break;
        }
    }
}
int main()
{
    int n;
    string s;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            Trans(s.at(i), n);
        }
        for (int i = s.length() - 1; i >= 0; i--)
        {
            cout << s.at(i);
        }
        cout << endl;
    }
}