//BCTEST14 - Ốc sên(80/100)
#include <iostream>
using namespace std;
int main()
{
    long long a, b, v;
    long long Day = 0;
    long long h = 0;
    cin >> a >> b >> v;
    // while (1)
    // {
    //     Day++;
    //     h += a;
    //     if (h >= v)
    //     {
    //         cout << Day;
    //         return 0;
    //     }
    //     else
    //     {
    //         h -= b;
    //     }
    // }
    if ((v - a) % (a - b) == 0)
        cout << (v - a) / (a - b) + 1;
    else
        cout << v / (a - b) + 1;
    return 0;
}