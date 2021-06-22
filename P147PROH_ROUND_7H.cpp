//P147PROH - ROUND 7H - Hai xâu có các kí tự giống nhau
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int stt = 0;
    while (1)
    {
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        if (s1 == "END" && s2 == "END")
            return 0;
        stt++;
        vector<int> Tanso1(130, 0);
        vector<int> Tanso2(130, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            Tanso1.at(s1.at(i))++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            Tanso2.at(s2.at(i))++;
        }
        int Check = 1;
        for (int i = 0; i < 130; i++)
        {
            if (Tanso2.at(i) != Tanso1.at(i))
            {
                cout << "Case " << stt << ": different\n";
                Check = 0;
                break;
            }
        }
        if (Check == 1)
        {
            cout << "Case " << stt << ": same\n";
        }
    }
}