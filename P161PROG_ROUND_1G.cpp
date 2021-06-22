//P161PROG - ROUND 1G - Số đặc biệt
//P204PROF - Chọn số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isCP(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    return false;
}
bool isSpecial(long long n)
{
    if (isCP(n) == true)
        return false;
    long long k = sqrt(n);
    if (k * k == n && isCP(k) == true)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (isCP(i) == true || isCP(n / i) == true)
                return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    vector<long long> Uoc;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            Uoc.push_back(i);
            Uoc.push_back(n / i);
        }
    }
    long long k = sqrt(n);
    if (k * k == n)
        Uoc.push_back(k);
    sort(Uoc.begin(), Uoc.end());
    for (int i = Uoc.size() - 1; i >= 0; i--)
    {
        if (isSpecial(Uoc.at(i)) == true)
        {
            cout << Uoc.at(i);
            return 0;
        }
    }
    return 0;
}