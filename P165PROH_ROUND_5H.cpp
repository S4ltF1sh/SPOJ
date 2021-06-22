//P165PROH - ROUND 5H - Tính chu vi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << 4 * (sqrt(a * b * c) / a + sqrt(a * b * c) / b + sqrt(a * b * c) / c) << endl;
    }
    return 0;
}