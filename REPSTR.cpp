//REPSTR - Replacing Digits
//thay the theo thu tu giam dan thoi :v
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
bool cmp(char x, char y)
{
    return x > y;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    sort(s2.begin(), s2.end(), cmp);
    for (int i = 0, j = 0; i < s1.length() && j < s2.length();)
    {
        if (s1.at(i) < s2.at(j))
        {
            s1.at(i) = s2.at(j);
            i++;
            j++;
        }
        else
            i++;
    }
    cout << s1;
}