//P161SUMI - ROUND 1I - Card game(WA)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> TanSo(26, 0);
int main()
{
    int n, k, Point = 0, Count = 0;
    string s;
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        TanSo.at(s.at(i) - 'A')++;
    sort(TanSo.begin(), TanSo.end());
    for (int i = 25; i >= 0; i--)
    {
        if (k >= TanSo.at(i))
        {
            Point += TanSo.at(i) * TanSo.at(i);
            k -= TanSo.at(i);
        }
        else
        {
            Point += k * k;
            k = 0;
        }
        if (k == 0)
            break;
    }
    cout << Point;
}