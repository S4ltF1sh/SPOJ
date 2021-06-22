//BCACM11B - Ma trận xoáy ốc (WA)
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100][100];
        int hang, cot, n, Min, Value = 1, x, y;
        cin >> n >> x >> y;
        hang = n - 1;
        cot = n - 1;
        Min = 0;
        while (Min <= n / 2)
        {
            for (int i = Min; i <= cot; i++)
                a[Min][i] = Value++;
            for (int i = Min + 1; i <= hang; i++)
                a[i][cot] = Value++;
            for (int i = cot - 1; i >= Min; i--)
                a[hang][i] = Value++;
            for (int i = hang - 1; i > Min; i--)
                a[i][Min] = Value++;
            Min++;
            hang--;
            cot--;
        }
        cout << a[x - 1][y - 1] << endl;
    }
}