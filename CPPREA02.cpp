//CPPREA02 - Re-arrang Array 2
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, Count0 = 0;
        cin >> n;
        vector<long long> A(n);
        vector<long long> B;
        for (long long i = 0; i < n; i++)
        {
            cin >> A.at(i);
            if (A.at(i) != 0)
                B.push_back(A.at(i));
            else
                Count0++;
        }
        for (long long i = 0; i < B.size(); i++)
            cout << B.at(i) << " ";
        while (Count0--)
            cout << 0 << " ";
        cout << endl;
    }
}