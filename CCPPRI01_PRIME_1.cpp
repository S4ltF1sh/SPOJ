//CCPPRI01 - PRIME 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    long long n;
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
        cout << 2 << " ";
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                cout << i << " ";
            }
        }
    }
    if (n > 1)
        cout << n;
    cout << endl;
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