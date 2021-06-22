//PTIT121L - Ghép hình
//neu 3 hcn co tong dien tich la 1 so chinh phuong thi moi co the la hv
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
long long isCP(long long n)
{
    long long tmp = sqrt(n);
    if (tmp * tmp == n)
        return tmp;
    return 0;
}
int main()
{
    long long a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    long long SumS = a1 * b1 + a2 * b2 + a3 * b3;
    long long tmp = isCP(SumS);
    if (tmp != 0)
    {
        //mac dinh b la chieu dai,a la chieu rong:
        if (a1 > b1)
            swap(a1, b1);
        if (a2 > b2)
            swap(a2, b2);
        if (a3 > b3)
            swap(a3, b3);
        //mac dinh b1 la b max
        if (b2 > b1)
        {
            swap(a1, a2);
            swap(b1, b2);
        }
        if (b3 > b1)
        {
            swap(a1, a3);
            swap(b1, b3);
        }
        //TH1:3hcn co chieu dai bang nhau
        if (b1 == b2 && b2 == b3 && b1 == tmp)
            cout << tmp;
        //TH2:
        else if ((a2 + a3 == tmp || b2 + b3 == tmp || a2 + b3 == tmp || a3 + b2 == tmp) && b1 == tmp)
            cout << tmp;
        else
            cout << 0;
    }
    else
        cout << 0;
}