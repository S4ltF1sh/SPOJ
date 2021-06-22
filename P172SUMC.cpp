//P172SUMC - ROUND 2C - Lũy thừa
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 4 == 0)
        cout << 6;
    else if ((n + 1) % 4 == 0)
        cout << 2;
    else if ((n + 2) % 4 == 0)
        cout << 4;
    else if ((n + 3) % 4 == 0)
        cout << 8;
    return 0;
}