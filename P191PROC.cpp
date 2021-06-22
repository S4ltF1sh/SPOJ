//P191PROC - Problem C - Tin nhắn (bai l*z + 1)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s[0] >= 'A' && s[0] <= 'Z')
            s[0] = s[0] - 'A' + 'a';
        char tmp = s[0];
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != ' ' && s[i + 1] != ' ')
                s[i] = s[i + 1];
            if (s[i] != ' ' && s[i + 1] == ' ')
                s[i] = s[i + 2];
        }
        s[s.length() - 1] = tmp;
        s += "ee";
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] = s[0] - 'a' + 'A';
        cout << s;
        cout << endl;
    }
    return 0;
}