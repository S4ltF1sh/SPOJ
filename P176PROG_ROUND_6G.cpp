//P176PROG - ROUND 6G - Số phần tử khác nhau
//thu 1 va`i th ra giay la thay
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    long long UCLN = __gcd(y, z);
    long long tmp = z / UCLN;
    if (tmp < n)
        cout << tmp;
    else
        cout << n;
}