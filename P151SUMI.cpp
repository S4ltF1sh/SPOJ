//P151SUMI - ROUND 1I - Bóng đá
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string s1;
    string s2;
    int Goal1 = 0, Goal2 = 0;
    cin >> n;
    cin.ignore();
    getline(cin, s1);
    Goal1++;
    for (int i = 1; i < n; i++)
    {
        string s;
        getline(cin, s);
        if (s != s1)
        {
            s2 = s;
            Goal2++;
        }
        else
        {
            Goal1++;
        }
    }
    // cout << s1 << ": " << Goal1 << endl;
    // cout << s2 << ": " << Goal2 << endl;
    if (Goal1 > Goal2)
        cout << s1;
    else
        cout << s2;
    return 0;
}