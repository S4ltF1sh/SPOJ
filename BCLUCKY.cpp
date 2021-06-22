#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
struct DATA
{
    long long Number;
    long long TanSo;
};
bool cmp(DATA x, DATA y)
{
    if (x.TanSo == y.TanSo)
        return x.Number < y.Number;
    return x.TanSo > y.TanSo;
}
vector<DATA> Guest;
map<string, long long> SoSo;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, x, Lai;
    string tmp;
    cin >> n >> x;
    Lai = n * x;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        SoSo[tmp]++;
    }
    for (auto i : SoSo)
    {
        DATA tmp2;
        tmp2.Number = stoi(i.first);
        tmp2.TanSo = i.second;
        Guest.push_back(tmp2);
    }
    sort(Guest.begin(), Guest.end(), cmp);
    Lai -= Guest.at(Guest.size() - 1).Number * Guest.at(Guest.size() - 1).TanSo;
    cout << Lai;
}