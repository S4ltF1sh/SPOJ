//BCPNA - Lại là số nguyên tố
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, Count = 0;
        cin >> n;
        if (isPrime(n) == true)
            Count++;
        for (int i = 0; i <= n / 2; i++)
        {
            int Sum = 0;
            if (isPrime(i) == true)
            {
                for (int j = i; j <= n; j++)
                {
                    if (isPrime(j) == true)
                    {
                        Sum += j;
                        if (Sum == n)
                            Count++;
                        if (Sum > n)
                            break;
                    }
                }
            }
        }
        cout << Count << endl;
    }
}