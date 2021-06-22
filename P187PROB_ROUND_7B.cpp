//P187PROB - ROUND 7B - TỔNG ƯỚC SỐ NGUYÊN TỐ(bai lon :< )
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<bool> isPrime(2e6 + 5, true);
vector<long long> SumUNT(2e6 + 5, 0);
long long Sum = 0;
void Etosthenes()
{
    for (int i = 2; i <= (int)(2e6 + 5) / 2; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * 2; j <= (int)2e6 + 5; j += i)
            {
                isPrime[j] = false;
                int tmp = j;
                while (tmp % i == 0)
                {
                    SumUNT[j] += i;
                    tmp /= i;
                }
            }
        }
    }
}
void Run()
{
    long long n;
    cin >> n;
    while (n--)
    {
        long long tmp;
        cin >> tmp;
        if (tmp == 1)
            continue;
        if (SumUNT[tmp] == 0)
        {
            Sum += tmp;
        }
        else
        {
            Sum += SumUNT[tmp];
        }
    }
    cout << Sum;
}
int main()
{
    Etosthenes();
    // for (int i = 0; i <= 50; i++)
    // {
    //     cout << i << "." << isPrime[i] << endl;
    // }
    Run();
}