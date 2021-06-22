//P185PROA - ROUND 5A - Số nhỏ nhất
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= '5')
            s.at(i) = 9 - ((int)s.at(i) - 48) + 48;
    }
    if (s.at(0) == '0')
        s.at(0) = '9'; //ki tu dau tien khong the la 0
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