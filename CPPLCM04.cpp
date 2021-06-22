//CPPLCM04 - LCM & GCD 4
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
//hàm kiểm tra số dư
bool Check(string a, long long b)
{
    long long Carry = 0;
    for (long long i = 0; i < a.size(); i++)
    {
        long long tmp = a[i] - '0';
        Carry = Carry * 10 + tmp;
        Carry %= b;
    }
    //du 0 thi a chia het cho b
    if (Carry % b == 0)
        return true;
    return false;
}
void Run()
{
    string a;
    long long b, Result = -1;
    cin >> b >> a;
    vector<long long> Uoc;
    for (long long i = 1; i < sqrt(b); i++)
    {
        if (b % i == 0)
        {
            Uoc.push_back(i);
            Uoc.push_back(b / i);
        }
    }
    long long k = sqrt(b);
    if (k * k == b)
        Uoc.push_back(k);
    sort(Uoc.begin(), Uoc.end());
    for (long long i = Uoc.size() - 1; i >= 0; i--)
    {
        if (Check(a, Uoc.at(i)) == true)
        {
            cout << Uoc.at(i) << endl;
            return;
        }
    }
    cout << 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}