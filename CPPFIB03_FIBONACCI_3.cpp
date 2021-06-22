//CPPFIB03 - FIBONACCI 3
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<long long> isFibo;
void FiBo()
{
    long long f1 = 0, f2 = 1, fibo;
    isFibo.push_back(f1);
    isFibo.push_back(f2);
    for (long long i = 3; i <= 92; i++)
    {
        fibo = f1 + f2;
        isFibo.push_back(fibo);
        f1 = f2;
        f2 = fibo;
    }
}
void Run()
{
    int n;
    cin >> n;
    vector<long long> Data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Data.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < isFibo.size(); j++)
        {
            if (Data.at(i) == isFibo.at(j))
            {
                cout << Data.at(i) << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    FiBo();
    while (t--)
    {
        Run();
    }
    return 0;
}