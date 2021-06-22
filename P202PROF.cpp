//P202PROF - Tăng sức mạnh(chua xong)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    int t;
    long long a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (c == 0 || b - a >= c)
            cout << 0;
        else if (a > b)
        {
            if (c % 2 == 0)
                cout << a / 2 + (a - b - 1);
            else
                cout << a / 2 + 1 + (a - b - 1);
        }
        else
        {
            
        }
    }
}