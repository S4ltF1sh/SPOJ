//P179PROE - ROUND 9E - NGÂN HÀNG
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
struct DATA
{
    double A;
    double B;
    double Sub;
};
bool cmp(DATA x, DATA y)
{
    return x.Sub < y.Sub;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, tmp, Sum = 0, Sumtmp = 0, Run = 0;
    cin >> n;
    vector<long long> Value(n);
    vector<DATA> Percent(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> Value[i];
        Sum += Value[i];
    }
    sort(Value.begin(), Value.end());
    for (int i = Value.size() - 1; i >= 0; i--)
    {
        Run++;
        Sumtmp += Value[i];
        Percent[Run - 1].A = (Run * 1.0 / (n * 1.0)) * 100.0;
        Percent[Run - 1].B = (Sumtmp * 1.0 / (Sum * 1.0)) * 100.0;
        Percent[Run - 1].Sub = Percent[Run - 1].B - Percent[Run - 1].A;
    }
    sort(Percent.begin(), Percent.end(), cmp);
    cout << fixed << setprecision(1) << Percent[n - 1].A << " " << Percent[n - 1].B;
}