#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long Sum = 0;
        cin >> n;
        for (long long i = 1; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                Sum += i;
                Sum += (n / i);
            }
        }
        if ((int)sqrt(n) * (int)sqrt(n) == n)
            Sum += sqrt(n);
        cout << Sum << endl;
    }
    return 0;
}