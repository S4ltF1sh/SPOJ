//P173PROE - ROUND 3E - Đọc sách
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
struct Data
{
    int iso;
    int index;
};
bool cmp(Data x, Data y)
{
    return x.index < y.index;
}
bool cmp1(Data x, Data y)
{
    if (x.iso == y.iso)
        return x.index > y.index;
    return x.iso < y.iso;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<Data> Time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Time.at(i).iso;
        Time.at(i).index = i + 1;
    }
    sort(Time.begin(), Time.end(), cmp1);
    cout << Time.at(n - k).iso << endl;
    sort(Time.begin() + n - k, Time.end(), cmp);
    for (int i = n - k; i < n; i++)
        cout << Time.at(i).index << " ";
}