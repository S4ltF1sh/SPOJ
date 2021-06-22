//P175PROE - ROUND 5E - Tổng chữ số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
//nen lan 1 de de phong so rat lon:
long long Winrar(string Check)
{
    long long Sum = 0;
    for (int i = 0; i < Check.length(); i++)
    {
        Sum += (int)Check.at(i) - 48;
    }
    return Sum;
}
//nen binh thuong:
int Winrar1(long long n)
{
    int Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    if (Sum < 10)
        return Sum;
    return Winrar1(Sum);
}
int main()
{
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << 0;
        return 0;
    }
    long long Sum1 = Winrar(s);
    if (Sum1 < 10)
    {
        cout << 1;
        return 0;
    }
    int Count = 1;
    while (Sum1 >= 10)
    {
        int Sum = 0;
        while (Sum1 > 0)
        {
            Sum += Sum1 % 10;
            Sum1 /= 10;
        }
        Count++;
        Sum1 = Sum;
    }
    cout << Count;
    return 0;
}