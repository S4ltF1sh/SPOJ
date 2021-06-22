//P197PROD - Problem D - Ez Game

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
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        long long tmp;
        cin >> n >> m;
        for (long long i = 1; i <= m + n; i++)
            cin >> tmp;
        if (n > m)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}