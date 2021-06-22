//P145SUMA - ROUND 5A - Chiếc vé may mắn
//phai dung n,khong duoc dung s.length()
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isLucky(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) != '4' && s.at(i) != '7')
            return false;
    }
    return true;
}
bool Sum_Equa(string s, int n)
{
    int Sum1 = 0;
    int Sum2 = 0;
    for (int i = 0; i < n / 2; i++)
    {
        Sum1 += (int)s.at(i) - 48;
        Sum2 += (int)s.at(n - i - 1) - 48;
    }
    if (Sum2 == Sum1)
        return true;
    return false;
}
int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    if (isLucky(s, n) == true && Sum_Equa(s, n) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}