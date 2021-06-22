//time
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
struct DATA
{
    long long Point = 0;
    int top_1 = 0;
    int top_2 = 0;
    int top_3 = 0;
    int SBD;
};
bool cmp(DATA x, DATA y)
{
    if (x.Point == y.Point)
        if (x.top_1 == y.top_1)
            if (x.top_2 == y.top_2)
                return x.SBD < y.SBD;
            else
                return x.top_2 > y.top_2;
        else
            return x.top_1 > y.top_1;
    else
        return x.Point > y.Point;
}
void Run(int n)
{
    //<SBD,Point>
    vector<DATA> TanSo(1e6 + 5);
    int tmp, tmp2;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        for (int j = 1; j <= tmp; j++)
        {
            cin >> tmp2;
            TanSo.at(tmp2).SBD = tmp2;
            if (j == 1)
            {
                TanSo.at(tmp2).Point += 3;
                TanSo.at(tmp2).top_1++;
            }
            else if (j == 2)
            {
                TanSo.at(tmp2).Point += 2;
                TanSo.at(tmp2).top_2++;
            }
            else
            {
                TanSo.at(tmp2).Point += 1;
                TanSo.at(tmp2).top_3++;
            }
        }
    }
    sort(TanSo.begin(), TanSo.end(), cmp);
    DATA Form = TanSo.at(0);
    for (long long i = 0; i < TanSo.size(); i++)
        if (TanSo.at(i).Point == Form.Point && TanSo.at(i).top_1 == Form.top_1 && TanSo.at(i).top_2 == Form.top_2)
            cout << TanSo.at(i).SBD << " ";
    cout << endl;
}
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        Run(n);
    }
}