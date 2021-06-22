//P144PROI - ROUND 4I - Đoạn thẳng lớn nhất
//find min of L[i] = MinL and Max of R[i] = MaxR => (MinL,MaxR) is result,if dont have any pairs (L,R) == (MinL,MaxR),print -1;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Data
{
    long long L0;
    long long R0;
    int index;
};
bool cmp(Data x, Data y)
{
    if (x.L0 == y.L0)
        return x.R0 > y.R0;
    else
        return x.L0 < y.L0;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> L(n);
    vector<long long> R(n);
    vector<Data> Line(n);
    for (int i = 0; i < n; i++)
    {
        cin >> L.at(i) >> R.at(i);
        Line.at(i).L0 = L.at(i);
        Line.at(i).R0 = R.at(i);
        Line.at(i).index = i + 1;
    }
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    sort(Line.begin(), Line.end(), cmp);
    if (L.at(0) == Line.at(0).L0 && R.at(n - 1) == Line.at(0).R0)
        cout << Line.at(0).index;
    else
        cout << -1;
    return 0;
}