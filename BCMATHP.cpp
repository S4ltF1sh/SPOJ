//BCMATHP - Lũy thừa 2
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    char b;
    cin >> a >> b;
    for (int i = a + 1; i <= 62; i++)
    {
        long long Check = (long long)pow(2, i);
        string s = to_string(Check);
        if (s.at(0) == b)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}