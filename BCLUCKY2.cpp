//BCLUCKY2 - Lại là số may mắn
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n % 7 == 0)
    {
        for (int i = 1; i <= n / 7; i++)
            cout << 7;
        return 0;
    }
    int tmp = n / 7;
    int Check = 0;
    int n4, n7;
    for (int i = tmp; i >= 0; i--)
        if ((n - i * 7) % 4 == 0)
        {
            Check = 1;
            n4 = (n - i * 7) / 4;
            n7 = i;
            for (int j = 1; j <= n4; j++)
                cout << 4;
            for (int j = 1; j <= n7; j++)
                cout << 7;
            break;
        }
    if (Check == 0)
        cout << -1;
}