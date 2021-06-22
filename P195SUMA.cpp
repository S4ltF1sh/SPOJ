//P195SUMA - Số nguyên dương nhỏ nhất
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, k, Count = 0, tmp;
    cin >> n >> k;
    vector<long long> Arr(n);
    for (long long i = 0; i < n; i++)
        cin >> Arr.at(i);
    sort(Arr.begin(), Arr.end());
    if (k == 0)
        tmp = 1;
    else
        tmp = Arr.at(k - 1);
    for (long long i = 0; i < n; i++)
        if (Arr.at(i) <= tmp)
            Count++;
    if (Count != k || tmp < 1)
        cout << -1;
    else
        cout << tmp;
}