//CPPFIB02 - FIBONACCI 2
//sa`ng Fibonacci
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    vector<long long> isFibo;
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
    while (t--)
    {
        int Check = 0;
        long long n;
        cin >> n;
        for (long long i = 0; i < isFibo.size(); i++)
        {
            if (n == isFibo[i])
            {
                cout << "YES";
                Check = 1;
                break;
            }
        }
        if (Check == 0)
            cout << "NO";
        cout << endl;
    }
}