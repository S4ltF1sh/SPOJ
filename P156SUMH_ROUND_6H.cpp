//P156SUMH - ROUND 6H - Kim cương
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1 = (n - 1) / 2;
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 1; j <= n1 - i; j++)
            cout << "*";
        for (int j = 1; j <= 2 * i + 1; j++)
            cout << "D";
        for (int j = 1; j <= n1 - i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n1 - i; j++)
            cout << "*";
        for (int j = 1; j <= 2 * i + 1; j++)
            cout << "D";
        for (int j = 1; j <= n1 - i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}