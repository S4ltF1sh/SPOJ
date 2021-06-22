//P178PROA - ROUND 8A - THUẾ THU NHẬP
#include <iostream>
using namespace std;
int main()
{
    long long n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        if (n < 1000000)
            cout << n << endl;
        else if (n >= 1000000 && n <= 5000000)
            cout << n * 90 / 100 << endl;
        else
            cout << n * 80 / 100 << endl;
    }
    return 0;
}