//PTIT018A - ACM PTIT 2018 A - CẶP SỐ NGUYÊN TỐ ĐẶC BIỆT
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
#define NMAX 10000000
vector<bool> isPrime(NMAX + 1, true);
void Etosthenes()
{
    isPrime.at(0) = isPrime.at(1) = false;
    for (long long i = 2; i <= sqrt(NMAX); i++)
    {
        if (isPrime.at(i) == true)
            for (long long j = i * i; j <= NMAX; j += i)
                isPrime.at(j) = false;
    }
}
void Run()
{
    long long l, r, Count = 0;
    cin >> l >> r;
    for (long long i = l; i <= r - 6; i++)
        if (isPrime.at(i) == true && isPrime.at(i + 6) == true)
            Count++;

    cout << Count << endl;
}
int main()
{
    Etosthenes();
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}