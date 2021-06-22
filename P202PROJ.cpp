//P202PROJ - Đếm cặp
//mang cong don
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long Count = 0;
    string s;
    getline(cin, s);
    int Count2[s.length()] = {0};
    if (s.at(0) == '2')
        Count2[0]++;
    for (int i = 1; i < s.length(); i++)
    {
        Count2[i] = Count2[i - 1];
        if (s.at(i) == '2')
            Count2[i]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            Count += (Count2[s.length() - 1] - Count2[i]);
    }
    cout << Count;
}