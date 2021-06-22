//CCPPRI14 - PRIME 14
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
vector<bool> isPrime(1e6 + 1, true);
void Etosthenes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (isPrime[i] == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                if (isPrime[j] == true)
                    isPrime[j] = false;
            }
        }
    }
}
void Run()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i] == true)
            cout << (long long)i * i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    Etosthenes();
    while (t--)
    {
        Run();
    }
}