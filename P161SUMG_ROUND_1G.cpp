//P161SUMG - ROUND 1G - Năm người yêu nhau
//so tien ban dau nhu nhau va co 5 nguoi =))
#include <iostream>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
    {
        cout << "-1";
        return 0;
    }
    int Sum = a + b + c + d + e;
    if (Sum % 5 == 0)
        cout << Sum / 5;
    else
        cout << -1;
}