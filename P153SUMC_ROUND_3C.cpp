//P153SUMC - ROUND 3C - Giờ học lý thú.

//F(1) = x, F(2) = y, F(i) = F(i-1) + F(i+1) với mọi i >= 2.

#include <iostream>
using namespace std;

long long Result(long long n, long long f1, long long f2)
{
    if (n == 1)
        return f1;
    if (n == 2)
        return f2;
    if (n == 3)
        return (f2 - f1);
    if (n == 4)
        return (-f1);
    if (n == 5)
        return (-f2);
    return (f1 - f2);
}

main()
{
    long long f1, f2, n, res;
    cin >> f1 >> f2 >> n;
    n = n % 6;
    cout << Result(n, f1, f2);
    return 0;
}