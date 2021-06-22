//P181PROI - ROUND 1I - Đoạn mã nguy hiểm
//1 <= n <= 100
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int Count = 0;
    for (int i = 2; i < s.length(); i++)
    {
        if (s.at(i) == '0' && s.at(i - 1) == '1' && s.at(i - 2) == '0')
        {
            Count++;
            s.at(i) = '1';
        }
    }
    cout << Count;
}