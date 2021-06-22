//P143PROJ - ROUND 3J - Quảng trường
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    if (n % a == 0)
        n = n / a;
    else
        n = n / a + 1;//neu khong chia het thi + 1 them vao de bu cho phan bi thieu (vi co the lat thua)
    if (m % a == 0)
        m = m / a;
    else
        m = m / a + 1;
    cout << m * n;
    return 0;
}