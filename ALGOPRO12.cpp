//ALGOPRO12 - Phương trình 2
//tim uoc cua N*N because: (x - n)*(y - n) = n * n
//khong co so bo test
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
long long nUoc(long long n)
{
    long long Count = 0;
    long long Res = 1;
    while (n % 2 == 0)
    {
        n /= 2;
        Count++;
    }
    Res *= (2 * Count + 1);
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            Count = 0;
            while (n % i == 0)
            {
                n /= i;
                Count++;
            }
            Res *= (2 * Count + 1);
        }
    }
    if (n > 1)
        Res *= 3; //Count = 1, 2*Count + 1
    return Res;
}
int main()
{
    long long n;
    cin >> n;
    cout << nUoc(n) << endl;
}