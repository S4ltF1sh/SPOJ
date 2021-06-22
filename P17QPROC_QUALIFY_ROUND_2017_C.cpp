//P17QPROC - QUALIFY ROUND 2017 C - SỐ KHÔNG HOÀN HẢO
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
vector<bool> isPrime(1e7 + 2, true);

int main()
{
    long long a, b;
    long long Sum = 0;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        Sum += F(i);
    }
    cout << Sum;
}