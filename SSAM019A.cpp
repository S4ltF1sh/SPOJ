//SSAM019A - CHIA HẾT CHO 2
#include <iostream>
#include <cmath>
using namespace std;
void Run()
{
    long long n;
    cin >> n;
    long long Count = 0;
    if (n % 2 == 0)
        Count++;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                Count++;
            if ((n / i) % 2 == 0)
                Count++;
        }
    }
    long long Check = sqrt(n);
    if (Check * Check == n && Check % 2 == 0)
        Count++;
    cout << Count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}