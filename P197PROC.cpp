//P197PROC - Problem C - Vẻ đẹp của mảng
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> Arr(n);
    long long best = -1e9 - 5;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        sum = max(Arr[i], sum + Arr[i]);
        best = max(sum, best);
    }
    cout << best << "\n";
}