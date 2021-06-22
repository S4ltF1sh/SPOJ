//P163PROI - ROUND 3I - Shopping
//ca 3 th: nha nam giua,P1 nam giua,P2 nam giua deu cho ra 3 cong thuc:
//d1+d2+d3,2(d1+d2),2(d1+d3),2(d2+d3)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    vector<long long> d(4);
    d.at(0) = d1 + d2 + d3;
    d.at(1) = 2 * (d1 + d2);
    d.at(2) = 2 * (d1 + d3);
    d.at(3) = 2 * (d2 + d3);
    sort(d.begin(), d.end());
    cout << d.at(0);
    return 0;
}