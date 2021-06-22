#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
using namespace std;
int Row[30], Col[30], Cheo1[30], Cheo2[30];
int Cnt = 0, n;
//ham kiem tra xem co dat duoc Queen o vi tri i,j khong.
//vi cac hang luon khac nhau nen khong can kiem tra hang.
bool Check(int i, int j)
{
    if (Col[j] == 1 || Cheo1[i + j - 1] == 1 || Cheo2[i - j + n] == 1)
        return false;
    return true;
}
void Try(int i)
{
    //stop:
    if (i == n + 1)
    {
        Cnt++;
        return;
    }

    //call de_quy:
    for (int j = 1; j <= n; j++)
    {
        //kiem tra xem co dat duoc Queen o vi tri i,j khong.
        if (Check(i, j) == true)
        {
            Col[j] = Cheo1[i + j - 1] = Cheo2[i - j + n] = 1;
            Try(i + 1);
            Col[j] = Cheo1[i + j - 1] = Cheo2[i - j + n] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << Cnt;
        Cnt = 0;
    }
    return 0;
}