//P175PROG - ROUND 5G - Magician
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
struct DOTA2
{
    string ID;
    string Name;
    char Status;
};
bool cmp(DOTA2 x, DOTA2 y)
{
    while (x.ID.length() > y.ID.length())
        y.ID = "0" + y.ID;
    while (x.ID.length() < y.ID.length())
        x.ID = "0" + x.ID;
    return x.ID < y.ID;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<DOTA2> List(n);
    for (int i = 0; i < n; i++)
        cin >> List.at(i).ID >> List.at(i).Name >> List.at(i).Status;
    sort(List.begin(), List.end(), cmp);
    for (int i = 0; i < n; i++)
        if (List.at(i).Name == "AM" && List.at(i).Status == 'W')
        {
            cout << List.at(i).ID;
            return 0;
        }
}