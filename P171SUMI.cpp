//P171SUMI - ROUND 1I - Not completely Palindrome
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        vector<int> TanSo(28, 0);
        int Count = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            TanSo.at(s.at(i) - 'a')++;
        for (int i = 0; i < 28; i++)
        {
            TanSo.at(i) %= 2;
            if (TanSo.at(i) == 1)
                Count++;
        }
        if (Count > 3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}