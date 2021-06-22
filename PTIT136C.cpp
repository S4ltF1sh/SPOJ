//PTIT136C - Tìm dãy số(WA)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<long long>> M(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }
    if (n == 2)
    {
        cout << M[1][0] / 2 << " " << M[1][0] / 2;
        return 0;
    }
    vector<long long> Val;
    int Run = 1;
    for (int j = 0; j < n - 1; j++)
    {
        long long Sum = 0;
        for (int i = Run; i < n; i++)
        {
            Sum += M[i][j];
        }
        Val.push_back(Sum);
        Run++;
    }
    vector<long long> A;
    int Run1 = n - 2;
    int Carry = 0, len = Val.size();
    for (int i = len - 2; i >= 0; i--)
    {
        long long tmp = (Val[i] - Val[len - 1] - Carry) / Run1;
        Carry += tmp;
        A.push_back(tmp);
        Run1++;
    }
    for (int i = A.size() - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    long long A0 = A[A.size() - 1];
    cout << M[n - 2][0] - A0 << " ";
    cout << M[n - 1][0] - A0;
}