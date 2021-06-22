//BCMARA - Chạy đua marathon (dùng sỏt cho struct)
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    int hour;
    int minute;
    int second;
};
bool cmp(Data x, Data y)
{
    if (x.hour == y.hour)
    {
        if (x.minute == y.minute)
            return x.second < y.second;
        else
            return x.minute < y.minute;
    }
    else
        return x.hour < y.hour;
}
int main()
{
    int n;
    cin >> n;
    vector<Data> Time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Time.at(i).hour;
        cin >> Time.at(i).minute;
        cin >> Time.at(i).second;
    }
    sort(Time.begin(), Time.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << Time.at(i).hour << " " << Time.at(i).minute << " " << Time.at(i).second << endl;
    }
    return 0;
}