//PTIT016D - ACM PTIT 2016 D - Biểu thức
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(long long x, long long y)
{
    return x > y;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long Sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    sort(a.begin() + 1, a.end(), cmp);
    for (int i = 0; i <= k; i++)
        Sum += a.at(i);
    for (int i = k + 1; i < n; i++)
        Sum -= a.at(i);
    cout << Sum;
}