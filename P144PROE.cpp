//P144PROE - ROUND 4E - Trò chơi tung đồng xu
//x >= Ti >= a; y >= Teo >= b; b < a;
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct SHOW
{
    int Ti;
    int Teo;
};
vector<SHOW> Res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, a, b, Count = 0;
    SHOW tmp;
    cin >> x >> y >> a >> b;
    for (int i = a; i <= x; i++)
        for (int j = b; j <= y && j < i; j++)
        {
            tmp.Ti = i;
            tmp.Teo = j;
            Count++;
            Res.push_back(tmp);
        }
    cout << Count << endl;
    for (int i = 0; i < Res.size(); i++)
        cout << Res.at(i).Ti << " " << Res.at(i).Teo << endl;
}