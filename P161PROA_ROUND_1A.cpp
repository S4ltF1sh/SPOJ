//P161PROA - ROUND 1A - Số gần nguyên tố
//Số mà có 3 ước thì chỉ có trường hợp số đó là số chính phương và căn 2 (của nó) là số nguyên tố.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(long long n)
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
    int n;
    long long Check;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Check;
        if ((long long)sqrt(Check) * (long long)sqrt(Check) == Check && isPrime((long long)sqrt(Check)) == true)
            cout<<"YES\n";
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}