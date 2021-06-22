//P203PROG - Cuộc thi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n;
    long long k, Max = 0, Count = 0, Winner;
    cin >> n >> k;
    vector<long long> Powwer(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Powwer.at(i);
        if (Powwer.at(i) > Max)
            Max = Powwer.at(i);
    }
    //th xau nhat laf k rat lon va thang manh nhat o cuoi hang
    if (k >= n - 1)
    {
        cout << Max;
        return 0;
    }
    if (Powwer.at(0) > Powwer.at(1))
    {
        Winner = Powwer.at(0);
        long long tmp = Powwer.at(1);
        Powwer.erase(Powwer.begin() + 1);
        Powwer.push_back(tmp);
        Count++;
    }
    else
    {
        Winner = Powwer.at(1);
        long long tmp = Powwer.at(0);
        Powwer.erase(Powwer.begin());
        Powwer.push_back(tmp);
        Count++;
    }
    while (Count != k)
    {
        if (Powwer.at(0) > Powwer.at(1))
        {
            Winner = Powwer.at(0);
            long long tmp = Powwer.at(1);
            Powwer.erase(Powwer.begin() + 1);
            Powwer.push_back(tmp);
            Count++;
        }
        else
        {
            Winner = Powwer.at(1);
            long long tmp = Powwer.at(0);
            Powwer.erase(Powwer.begin());
            Powwer.push_back(tmp);
            Count = 0;
        }
    }
    cout << Winner;
}
