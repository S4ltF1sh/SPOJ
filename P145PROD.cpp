//P145PROD - ROUND 5D - Diện tích hình tròn
//nhin bo test mau suy ra cong thuc 2*n*n
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.14159265358979;
int main()
{
    double R;
    cin >> R;
    double S_eculide = PI * R * R;
    double S_taxicab = 2 * R * R;
    cout << fixed << setprecision(6) << S_eculide << endl
         << S_taxicab;
}