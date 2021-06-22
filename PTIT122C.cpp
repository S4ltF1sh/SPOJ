//PTIT122C - Giai thừa 2
#include <iostream>
using namespace std;
void giaithua(int n, int Check)
{
    int A[500000], SoChuSo = 1;
    long long tmp = 0, tmp2;
    int Count = 0;
    A[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < SoChuSo; j++)
        {
            tmp2 = tmp;
            tmp = (A[j] * i + tmp) / 10;
            A[j] = (A[j] * i + tmp2) % 10;
        }
        while (tmp > 0)
        {
            A[SoChuSo] = tmp % 10;
            SoChuSo++;
            tmp /= 10;
        }
    }
    for (int i = 0; i < SoChuSo; i++)
    {
        if (A[i] == Check)
            Count++;
    }
    cout << Count << endl;
}
void Run()
{
    int n, x;
    cin >> n >> x;
    giaithua(n, x);
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
