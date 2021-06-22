//P145PROH - ROUND 5H - Bội chung nhỏ nhất
//https://www.geeksforgeeks.org/find-three-integers-less-than-or-equal-to-n-such-that-their-lcm-is-maximum/
/*
Nếu n lẻ thì câu trả lời sẽ là n, n-1, n-2.
Nếu n chẵn:
    Nếu gcd của n và n-3 là 1 thì câu trả lời sẽ là n, n-1, n-3.
    Nếu không, n-1, n-2, n-3 sẽ là câu trả lời.
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n < 3)
        cout << n;
    else
    {
        if (n % 2 == 1)
            cout << n * (n - 1) * (n - 2);
        else
        {
            if (__gcd(n, n - 3) == 1)
                cout << n * (n - 1) * (n - 3);
            else
                cout << (n - 1) * (n - 2) * (n - 3);
        }
    }
}