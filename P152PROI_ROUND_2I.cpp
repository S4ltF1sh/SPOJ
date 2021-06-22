//P152PROI - ROUND 2I - Chuyển đổi đại lượng góc
#include <iostream>
using namespace std;
long long UCLN(long long A, long long B)
{
    if (A == 0 || B == 0)
    {
        return A + B;
    }
    return UCLN(B, A % B);
}
void Run()
{
    long long A;
    cin >> A;
    A %= 360;
    if (A % 360 == 0)
        cout << "0$";
    else
    {
        long long MauSo = 180 / UCLN(A, 180), TuSo = A / UCLN(A, 180);
        if (MauSo == 1 && TuSo == 1)
        {
            cout << "$";
        }
        else if (MauSo != 1 && TuSo == 1)
        {
            cout << "$/" << MauSo;
        }
        else if (MauSo != 1 && TuSo != 1)
        {
            cout << TuSo << "$/" << MauSo;
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}