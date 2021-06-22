//P203PROD - Giải đố
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
vector<bool> Check(1e6 + 1, true);

void isEtosthenes()
{
    Check.at(0) = Check.at(1) = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (Check.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                Check.at(j) = false;
            }
        }
    }
}
void Run()
{
    int n;
    cin >> n;
    int Count = 0;
    for (int i = 2; i <= 1e6; i++)
    {
        if (Check.at(i) == true)
            Count++;
        if (Count == n)
        {
            cout << i << endl;
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    isEtosthenes();
    while (t--)
    {
        Run();
    }
    return 0;
}