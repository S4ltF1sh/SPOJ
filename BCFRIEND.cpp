//BCFRIEND - Kết bạn (OLP Tin học SV 2009 - Khối không chuyên)(50/100)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n, B, Count = 0;
    cin >> n >> B;
    vector<long long> Arr(n);
    for (int i = 0; i < n; i++)
        cin >> Arr.at(i);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Arr.at(i) + Arr.at(j) == B)
                Count++;
        }
    }
    cout << Count;
}