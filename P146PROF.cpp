//P146PROF - ROUND 6F - Tam giác
//sinh to hop kiem tra tung truong hop
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int _3C4[4] = {0, 1, 2, 3};
int d[5];
int Check1 = 0, Check2 = 0;
void Test()
{
    if (d[_3C4[1]] + d[_3C4[2]] > d[_3C4[3]] && d[_3C4[2]] + d[_3C4[3]] > d[_3C4[1]] && d[_3C4[1]] + d[_3C4[3]] > d[_3C4[2]])
        Check1 = 1;
    if (d[_3C4[1]] + d[_3C4[2]] == d[_3C4[3]] || d[_3C4[2]] + d[_3C4[3]] == d[_3C4[1]] || d[_3C4[1]] + d[_3C4[3]] == d[_3C4[2]])
        Check2 = 1;
}
void Sinh(int i, int n, int k)
{
    for (int j = _3C4[i - 1] + 1; j <= n - k + i; j++)
    {
        _3C4[i] = j;
        if (i == k)
            Test();
        else
            Sinh(i + 1, n, k);
    }
}
int main()
{
    for (int i = 1; i <= 4; i++)
        cin >> d[i];
    Test();
    Sinh(1, 4, 3);
    if (Check1 == 1)
        cout << "TRIANGLE";
    else if (Check2 == 1)
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}