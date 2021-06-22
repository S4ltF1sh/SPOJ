//PTIT134A - Trò chơi với chuỗi đối xứng
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
    while (cin >> s)
    {
        int Count = 0;
        vector<int> Tanso(30, 0);
        for (int i = 0; i < s.length(); i++)
            Tanso.at(s.at(i) - 'a')++;
        for (int i = 0; i < 26; i++)
            //xoa 1 ki tu
            if (Tanso.at(i) % 2 == 1)
                Count++;
        if (Count < 2 || Count % 2 == 1)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}