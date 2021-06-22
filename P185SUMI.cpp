//P185SUMI - ROUND 5I - Rút gọn căn(RTE)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long isCP(long long n)
{
    long long tmp = sqrt(n);
    if (tmp * tmp == n)
        return tmp;
    return 0;
}
void Creat(vector<long long> &UocCP, long long n)
{
    UocCP.push_back(1);
    long long tmp = sqrt(n);
    if (isCP(n) != 0)
    {
        UocCP.push_back(isCP(n));
        return;
    }
    for (long long i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (isCP(i) != 0)
                UocCP.push_back(isCP(i));
            if (isCP(n / i) != 0)
            {
                UocCP.push_back(isCP(n / i));
                return;
            }
        }
    }
}
void Run()
{
    long long n;
    cin >> n;
    vector<long long> UocCP;
    Creat(UocCP, n);
    sort(UocCP.begin(), UocCP.end());
    long long tmp = UocCP.at(UocCP.size() - 1);
    cout << tmp << " " << n / (tmp * tmp) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}