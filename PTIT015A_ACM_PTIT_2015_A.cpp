//PTIT015A - ACM PTIT 2015 A - Ghép số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(char s1, char s2)
{
    return s1 > s2;
}
void Run()
{
    string s;
    for (int i = 0; i < 3; i++)
    {
        string s1;
        cin >> s1;
        s += s1;
    }
    sort(s.begin(), s.end(), cmp);
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}