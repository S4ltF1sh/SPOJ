//BCPOW - Lũy thừa
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long Tich1 = 1, Tich2 = 1;
    for (int i = 1; i <= a; i++)
    {
        Tich1 *= 2;
    }
    for (int i = 1; i <= b; i++)
    {
        Tich2 *= 3;
    }
    long long Sum = Tich1 + Tich2;
    cout << to_string(Sum).at(0);
    return 0;
}