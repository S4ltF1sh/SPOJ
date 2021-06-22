//P162PROI - ROUND 2I - Alex và tiền gửi ngân hàng
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    if (s.at(0) != '-')
    {
        cout << s;
        return 0;
    }
    else
    {
        string tmp = s;
        s.pop_back();
        tmp.erase(s.length() - 1, 1);
        if (stoi(s) > stoi(tmp))
        {
            cout << stoi(s);
            return 0;
        }
        else
        {
            cout << stoi(tmp);
            return 0;
        }
    }
    return 0;
}