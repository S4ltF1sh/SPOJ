//SSAM119H - TÌM SỐ DƯ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
bool Div_4(string s)
{
    int len = s.length();
    if (len == 1)
    {
        if (stoi(s) % 4 == 0)
            return true;
        return false;
    }
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
    getline(cin, s);
    if (Div_4(s) == true)
        cout << 4 << endl;
    else
        cout << 0 << endl;
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
    return 0;
}