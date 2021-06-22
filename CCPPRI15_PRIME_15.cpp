//CCPPRI15 - PRIME 15
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
    cout << 1 << " ";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] == true)
            cout << i << " ";
        else
        {
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0 && isPrime[j] == true)
                {
                    cout << j << " ";
                    break;
                }
            }
        }
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