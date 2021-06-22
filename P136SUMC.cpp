//P136SUMC - SUM6 C - Số nghịch đảo
#include <iostream>
using namespace std;
long long Reserve(long long n)
{
    int nRe = 0;
    while (n > 0)
    {
        nRe = nRe * 10 + n % 10;
        n /= 10;
    }
    return nRe;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << max(Reserve(a), Reserve(b));
    return 0;
}