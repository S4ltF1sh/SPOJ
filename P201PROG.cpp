//P201PROG - Sai số của số thực
//ct cua so Fibonacci :))
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> isFibo;
    long long f1 = 0, f2 = 1, fibo;
    isFibo.push_back(f1);
    isFibo.push_back(f2);
    for (long long i = 3; i <= 92; i++)
    {
        fibo = f1 + f2;
        isFibo.push_back(fibo);
        f1 = f2;
        f2 = fibo;
    }
    cout << isFibo.at(n);
}