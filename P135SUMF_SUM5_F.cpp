//P135SUMF - SUM5 F - Quân bài Domino
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long Sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            Sum += (i + j);
        }
    }
    cout << Sum;
    return 0;
}