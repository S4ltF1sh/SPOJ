//P153PROF - ROUND 3F - Quyết chiến
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<long long> Dire(n);
    vector<long long> Radiant(n);
    for (long long i = 0; i < n; i++)
        cin >> Radiant.at(i);
    for (long long i = 0; i < n; i++)
        cin >> Dire.at(i);
    sort(Radiant.begin(), Radiant.end());
    sort(Dire.begin(), Dire.end());
    long long Run = 0, Count = 0;
    for (long long i = 0; i < n; i++)
        if (Dire.at(i) > Radiant.at(Run))
        {
            Run++;
            Count++;
        }
    cout << Count;
}