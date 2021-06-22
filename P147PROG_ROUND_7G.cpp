//P147PROG - ROUND 7G - Điểm cân bằng
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n;
    double x, y, m;
    int stt = 0;
    while (1)
    {
        double a = 0, b = 0, n1 = 0;
        cin >> n;
        if (n < 0)
            return 0;
        stt++;
        while (n--)
        {
            cin >> x >> y >> m;
            a += 1.0 * x * m;
            b += 1.0 * y * m;
            n1 += m;
        }
        a = a / n1;
        b = b / n1;
        cout << "Case " << stt << ": " << fixed << setprecision(2) << a << " " << b << endl;
    }
    return 0;
}
