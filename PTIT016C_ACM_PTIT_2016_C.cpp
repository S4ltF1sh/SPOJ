//PTIT016C - ACM PTIT 2016 C - Chẵn lẻ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int Run()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((i + 1) % 2 == 1 && ((int)s.at(i) - 48) % 2 == 0)
        {
            cout << "NO\n";
            return 0;
        }
        else if ((i + 1) % 2 == 0 && ((int)s.at(i) - 48) % 2 == 1)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
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