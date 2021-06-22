//P165SUMI - ROUND 5I - Cộng trừ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << "-" << n / 2 + 1;
    return 0;
}