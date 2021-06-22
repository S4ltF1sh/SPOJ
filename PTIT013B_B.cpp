//PTIT013B - Bài B - BONG DA
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    string Name;
    int Point;
};
bool cmp(Data x, Data y)
{
    if (x.Point == y.Point)
        return x.Name < y.Name;
    return x.Point > y.Point;
}
void ShowW(vector<Data> Team, int Local, int n, string LuveTeam, int Local1)
{
    Team.at(Local).Point += 3;
    sort(Team.begin(), Team.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (Team.at(i).Name == LuveTeam)
            cout << i + 1 << " ";
    }
}
void ShowL(vector<Data> Team, int Local, int n, string LuveTeam, int Local1)
{
    Team.at(Local1).Point += 3;
    sort(Team.begin(), Team.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (Team.at(i).Name == LuveTeam)
            cout << i + 1 << " ";
    }
}
void ShowT(vector<Data> Team, int Local, int n, string LuveTeam, int Local1)
{
    Team.at(Local).Point += 1;
    Team.at(Local1).Point += 1;
    sort(Team.begin(), Team.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (Team.at(i).Name == LuveTeam)
            cout << i + 1 << endl;
    }
}
void Run()
{
    int n, Local, Local1;
    string LuveTeam;
    string EnemyTeam;
    cin >> n;
    cin.ignore();
    getline(cin, LuveTeam);
    getline(cin, EnemyTeam);
    vector<Data> Team(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Team.at(i).Name >> Team.at(i).Point;
        if (Team.at(i).Name == LuveTeam)
            Local = i;
        if (Team.at(i).Name == EnemyTeam)
            Local1 = i;
        cin.ignore();
    }
    ShowW(Team, Local, n, LuveTeam, Local1);
    ShowL(Team, Local, n, LuveTeam, Local1);
    ShowT(Team, Local, n, LuveTeam, Local1);
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