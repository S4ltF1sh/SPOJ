//CPPREA06 - Re-arrang Array 6
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, Count0 = 0;
    cin >> n;
    vector<long long> A(n);
    vector<long long> B;
    for (long long i = 0; i < n; i++)
        cin >> A.at(i);
    for (long long i = 0; i < n - 1; i++)
    {
        if (A.at(i) != 0 && A.at(i) == A.at(i + 1))
        {
            A.at(i) *= 2;
            A.at(i + 1) = 0;
        }
        if (A.at(i) != 0)
            B.push_back(A.at(i));
        else
            Count0++;
    }
    if (A.at(n - 1) != 0)
        B.push_back(A.at(n - 1));
    else
        Count0++;
    for (long long i = 0; i < B.size(); i++)
        cout << B.at(i) << " ";
    while (Count0--)
        cout << 0 << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}