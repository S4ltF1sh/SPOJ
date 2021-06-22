//CPPMOD05 - MODULO 5
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    string s;
    long long Result = 0, m;
    getline(cin, s);
    cin >> m;
    cin.ignore();
    for (int i = 0; i < s.length(); i++)
    {
        Result = Result * 10 + (int)s.at(i) - 48;
        Result %= m;
    }
    cout << Result << endl;
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