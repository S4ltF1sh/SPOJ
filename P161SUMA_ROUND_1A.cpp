//P161SUMA - ROUND 1A - Cắt giấy
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1;
        return 0;
    }
    long long Count = 0;
    while (b > 0)
    {
        Count += a / b;
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    cout << Count;
    return 0;
}