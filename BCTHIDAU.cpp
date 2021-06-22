//BCTHIDAU - Thi đấu
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    string Name;
    int Bai[4];
    int Time[4];
    int Penaty = 0;
    int AC = 0;
};
bool cmp(Data x, Data y)
{
    if (x.AC == y.AC)
        return x.Penaty < y.Penaty;
    else
        return x.AC > y.AC;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<Data> Team(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Team.at(i).Name;
        for (int j = 0; j < 4; j++)
        {
            cin >> Team.at(i).Bai[j] >> Team.at(i).Time[j];
            if (Team.at(i).Time[j] != 0)
            {
                Team.at(i).Penaty += (Team.at(i).Bai[j] - 1) * 20 + Team.at(i).Time[j];
                Team.at(i).AC += 1;
            }
        }
        cin.ignore();
    }
    sort(Team.begin(), Team.end(), cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << Team.at(i).Name << " " << Team.at(i).AC << " " << Team.at(i).Penaty << endl;
    // }
    cout << Team.at(0).Name << " " << Team.at(0).AC << " " << Team.at(0).Penaty;
    return 0;
}