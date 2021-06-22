//SSAM019H - SỐ FIBONACCI THỨ N
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const long long MOD = 1e9 + 7;
struct MATRIX
{
    long long tmp[2][2] = {{0, 1}, {1, 1}};
};

MATRIX Multi(MATRIX a, MATRIX b, int n)
{
    MATRIX Res;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            Res.tmp[i][j] = 0;
            for (int k = 0; k < n; k++)
                Res.tmp[i][j] = (Res.tmp[i][j] + a.tmp[i][k] * b.tmp[k][j]) % MOD;
        }
    return Res;
}
MATRIX POW(MATRIX a, int k, int n)
{
    if (k == 1)
        return a;
    if (k % 2 == 0)
    {
        MATRIX x = POW(a, k / 2, n);
        return Multi(x, x, n);
    }
    else
    {
        return Multi(a, POW(a, k - 1, n), n);
    }
}
void Run()
{
    long long k;
    cin >> k;
    MATRIX a;
    a = POW(a, k, 2);
    cout << a.tmp[0][1] << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}