//P195SUMB - Ăn bánh
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
    cin.tie(0);
    long long n, Sum = 0, CountTi = 0, CountTeo = 0;
    cin >> n;
    vector<long long> Time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Time.at(i);
        Sum += Time.at(i);
    }
    if (n == 1)
    {
        cout << "1 0";
        return 0;
    }
    long long tmp1 = Sum / 2, tmp2 = Sum / 2;
    //dem so banh Ti an:
    int i = 0;
    while (tmp1 - Time.at(i) >= 0)
    {
        tmp1 -= Time.at(i);
        i++;
        CountTi++;
    }
    //dem so banh Teo an:
    int j = n - 1;
    while (tmp2 - Time.at(j) >= 0)
    {
        tmp2 -= Time.at(j);
        j--;
        CountTeo++;
    }
    //cai banh cuoi Teo dang an do:
    if (tmp1 < tmp2)
        CountTeo++;
    else if (tmp1 > tmp2)
        CountTi++;
    else if (i == j)
        CountTi++;
    cout << CountTi << " " << CountTeo;
    return 0;
}