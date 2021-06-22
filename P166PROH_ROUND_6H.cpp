//P166PROH - ROUND 6H - Số gần nguyên tố
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
// bool isPrime(int n)
// {
//     if (n < 2)
//         return false;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
bool UocNT(int n)
{
    int CountUNT = 0;
    if (n % 2 == 0)
        CountUNT++;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            CountUNT++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        CountUNT++;
    if (CountUNT == 2)
        return true;
    return false;
}
int main()
{
    int n;
    int Count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (UocNT(i) == true)
            Count++;
    }
    cout << Count;
    return 0;
}