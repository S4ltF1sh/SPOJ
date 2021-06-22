//P166SUMG - ROUND 6G - Enchantress
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        //neu a==0 va 1 trong 2 cai kia bang 0 thi khoi can xet
        if (a == 0 && (b == 0 || c == 0))
            cout << "NO\n";
        else if (b == c)
            cout << "YES\n";
        else
        {
            if (abs(b - c) % 3 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}