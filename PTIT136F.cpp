//PTIT136F - Trò chơi cắt hình(AC moi cang thang chu :v)
//xanh = 2^(n-1)*(2^n + 1);trang = 2^(n-1)*(2^n - 1)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const long long MOD = 100000001;
long long POW(long long a, long long b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return POW(a * a % MOD, b / 2) % MOD;
    else
        return a * POW(a * a % MOD, b / 2) % MOD;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, stt = 0;
    cin >> t;
    while (t--)
    {
        stt++;
        long long n;
        cin >> n;
        if (n == 0)
            cout << "Case " << stt << ": 1 0" << endl;
        else
        {
            long long Xanh = POW(2, n - 1) * (POW(2, n) + 1);
            Xanh %= MOD;
            long long Trang = POW(2, n - 1) * (POW(2, n) - 1);
            Trang %= MOD;
            cout << "Case " << stt << ": " << Xanh << " " << Trang << endl;
        }
    }
}