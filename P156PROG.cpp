//P156PROG - ROUND 6G - Thứ tự xếp hạng

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
struct DATA
{
    long long Point;
    long long index;
};
bool cmp(DATA x, DATA y)
{
    if (x.Point == y.Point)
        return x.index < y.index;
    return x.Point > y.Point;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int stt = 0;
    long long n;
    while (cin >> n)
    {
        stt++;
        int Check = 0;
        vector<DATA> First(n);
        vector<DATA> Second(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> First.at(i).Point;
            First.at(i).index = i + 1;
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> Second.at(i).Point;
            Second.at(i).index = i + 1;
        }
        sort(First.begin(), First.end(), cmp);
        sort(Second.begin(), Second.end(), cmp);
        for (long long i = 0; i < n; i++)
        {
            if (First.at(i).index != Second.at(i).index)
            {
                cout << "Case " << stt << ": " << i + 1 << endl;
                Check = 1;
                break;
            }
        }
        if (Check == 0)
            cout << "Case " << stt << ": "
                 << "agree\n";
    }
}