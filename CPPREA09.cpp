//CPPREA09 - Re-arrang Array 9
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
        long long n;
        cin >> n;
        vector<long long> A(n);
        vector<long long> B;
        for (long long i = 0; i < n; i++)
        {
            cin >> A.at(i);
        }
        B.push_back(A.at(0) * A.at(1));
        for (long long i = 1; i < n - 1; i++)
            B.push_back(A.at(i - 1) * A.at(i + 1));
        B.push_back(A.at(A.size() - 1) * A.at(A.size() - 2));
        for (int i = 0; i < B.size(); i++)
        {
            cout << B.at(i) << " ";
        }
        cout << endl;
    }
}