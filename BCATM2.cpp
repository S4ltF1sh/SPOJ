//BCATM2 - ATM 2
//SSAM019E - MÁY ATM
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
bool cmp(long long x, long long y) { return x > y; }
int main()
{
    long long n, S, Count = 0;
    cin >> n >> S;
    long long Value[n];
    for (int i = 0; i < n; i++)
        cin >> Value[i];
    sort(Value, Value + n, cmp);
    for (int i = 0; i < n; i++)
        if (S >= Value[i])
        {
            S -= Value[i];
            Count++;
        }
    cout << Count;
    return 0;
}