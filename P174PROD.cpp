//P174PROD - ROUND 4D - Lucian và những con số
//n % 5 = 1, m % 5 = 4 => (n + m) % 5 = 0 tuong tu cac truong hop khac
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long TanSo1[7] = {0}, TanSo2[7] = {0};
    for (int i = 1; i <= n; i++)
        TanSo1[i % 5]++;
    for (int i = 1; i <= m; i++)
        TanSo2[i % 5]++;
    //cac so chia het cho 5 cong lai thi chia het cho 5
    long long Count = TanSo1[0] * TanSo2[0];
    int Run = 4;
    for (int i = 1; i <= 4; i++)
    {
        Count += TanSo1[i] * TanSo2[Run--];
    }
    cout << Count;
}