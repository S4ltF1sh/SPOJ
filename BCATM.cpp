//BCATM - ATM
//test long, khong can dung quy hoach dong
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(long long x, long long y) { return x > y; }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, S, Count = 0;
    cin >> n >> S;
    long long Value[n];
    for (long long i = 0; i < n; i++)
        cin >> Value[i];
    sort(Value, Value + n, cmp);
    for (long long i = 0; i < n; i++)
    {
        if (S >= Value[i])
        {
            S -= Value[i];
            Count++;
        }
        if (S <= 0)
            break;
    }
    cout << Count;
}