//P183PROH - ROUND 3H - 3 ngọn tháp(WA)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n1, n2, n3, h1 = 0, h2 = 0, h3 = 0;
    cin >> n1 >> n2 >> n3;
    int Tow1[n1], Tow2[n2], Tow3[n3];
    for (int i = 0; i < n1; i++)
    {
        cin >> Tow1[i];
        h1 += Tow1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> Tow2[i];
        h2 += Tow2[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cin >> Tow3[i];
        h3 += Tow3[i];
    }
    int i1 = 0, i2 = 0, i3 = 0;
    while (n1 > 0 || n2 > 0 || n3 > 0)
    {
        if (h1 >= h2 && h1 >= h3)
        {
            h1 -= Tow1[i1];
            i1++;
        }
        else if (h2 >= h3 && h2 >= h2)
        {
            h2 -= Tow2[i2];
            i2++;
        }
        else
        {
            h3 -= Tow3[i3];
            i3++;
        }
        if (h1 == h2 && h1 == h3)
        {
            cout << h1;
            return 0;
        }
    }
    cout << 0;
}