//P151PROH - ROUND 1H - Số ma thuật
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        //144
        if (i + 1 < s.size() && i + 2 < s.size())
            if (s.at(i) == '1' && s.at(i + 1) == '4' && s.at(i + 2) == '4')
            {
                i += 3;
                continue;
            }
        //14
        if (i + 1 < s.size())
            if (s.at(i) == '1' && s.at(i + 1) == '4')
            {
                i += 2;
                continue;
            }
        //1
        if (s.at(i) == '1')
        {
            i += 1;
            continue;
        }
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}