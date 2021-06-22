//P178PROF - ROUND 8F - DÃY HAILSTONE
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        vector<long long> Arr;
        Arr.push_back(n);
        while (1)
        {
            long long tmp = Arr.at(Arr.size() - 1);
            if (tmp == 1)
                break;
            if (tmp % 2 == 0)
                Arr.push_back(tmp / 2);
            else
                Arr.push_back(3 * tmp + 1);
        }
        cout << Arr.size() << endl;
    }
}