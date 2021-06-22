//CPPPRI04 - PRIME 4(use Etosthenes)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> Prime(10005, true);
void Etosthenes()
{
    Prime.at(0) = Prime.at(1) = false;
    for (int i = 2; i * i <= 10000; i++)
    {
        if (Prime.at(i) == true)
        {
            for (int j = i * 2; j <= 10000; j += i)
            {
                Prime.at(j) = false;
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
        if (i % 2 == 0)
            cout << 2 << " ";
        else if (Prime.at(i) == true)
            cout << i << " ";
        else
        {
            for (int j = 3; j < i; j++)
            {
                if (Prime.at(j) == true && i % j == 0)
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
    return 0;
}