//P163SUMH - ROUND 3H - Xúc xắc
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, CountTi = 0, CountTeo = 0, Count_Same = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) > abs(b - i))
            CountTeo++;
        else if (abs(a - i) < abs(b - i))
            CountTi++;
        else
            Count_Same++;
    }
    cout << CountTi << " " << Count_Same << " " << CountTeo;
}