//P153PROI - ROUND 3I - Mã hóa xâu
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
        vector<int> Tanso(300, 0);
        string s;
        string sOUT = "";
        getline(cin, s);
        int Value = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == ' ')
                continue;
            if (s.at(i) >= 'A' && s.at(i) <= 'Z')
                s.at(i) += 32;
            if (Tanso.at(s.at(i)) == 0)
                sOUT += s.at(i);
            Tanso.at(s.at(i))++;
        }
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (Tanso.at(i) > 1)
            {
                Value += Tanso.at(i);
            }
        }
        cout << Value << " " << sOUT << endl;
    }
    return 0;
}