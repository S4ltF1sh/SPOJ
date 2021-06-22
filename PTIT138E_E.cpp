//PTIT138E - BÀI E - LÀM TRÒN SỐ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    string s;
    cin >> s;
    int len = s.length();
    int Count = 0;
    for (int i = len - 1; i >= 1; i--)
    {
        int tmp = (s.at(i) - 48) + Count;
        s.at(i) = tmp + 48;
        if (s.at(i) >= '5')
        {
            s.at(i) = '0';
            //lam tron len thi so sau se tang 1 don vi
            Count = 1;
        }
        else
        {
            s.at(i) = '0';
            //lam tron xuong thi so sau khong doi
            Count = 0;
        }
    }
    //neu s[1] duoc lam tron len:
    if (Count == 1)
    {
        int tmp = s.at(0) - 48 + Count;
        if (tmp < 10)
            s.at(0) = tmp + 48;
        else
        {
            s.at(0) = '0';
            s.insert(s.begin(), '1');
        }
    }
    cout << s << endl;
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