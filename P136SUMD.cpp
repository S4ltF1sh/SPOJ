//P136SUMD - SUM6 D - Mua kẹo
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long Need, k, Result;
    cin >> Need >> k;
    long long tmp = pow(10, k);
    long long Check = Need % tmp;
    if (Need % tmp == 0)
    {
        cout << Need;
        return 0;
    }
    else
    {
        if (Check < tmp / 2)
            Result = Need / tmp * tmp;
        else
            Result = Need / tmp * tmp + tmp;
        cout << Result;
    }
}