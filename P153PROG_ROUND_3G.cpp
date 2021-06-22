//P153PROG - ROUND 3G - Chẵn lẻ
#include <iostream>
using namespace std;
int main()
{
    long long n, k;
    long long nle, nchan;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        nchan = n / 2;
        nle = nchan;
    }
    else
    {
        nchan = (n - 1) / 2;
        nle = nchan + 1;
    }
    if (k <= nle)
    {
        cout << (k - 1) * 2 + 1;
    }
    else
    {
        cout << (k - nle) * 2;
    }
    return 0;
}