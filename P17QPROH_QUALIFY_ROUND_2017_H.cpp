//P17QPROH - QUALIFY ROUND 2017 H - TÍCH VÔ HƯỚNG
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
bool cmp(int x, int y)
{
    return x > y;
}
void Run(int stt)
{
    int n;
    cin >> n;
    vector<long long> U(n);
    vector<long long> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> U.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> V.at(i);
    }
    sort(U.begin(), U.end());
    sort(V.begin(), V.end(), cmp);
    long long TVH = 0;
    for (int i = 0; i < n; i++)
    {
        TVH += U.at(i) * V.at(i);
    }
    cout << "Case #" << stt << ": ";
    cout << TVH << endl;
}
int main()
{
    int t;
    cin >> t;
    int stt = 0;
    while (t--)
    {
        stt++;
        Run(stt);
    }
}