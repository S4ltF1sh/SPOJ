//P163SUMI - ROUND 3I - Chữ số thứ n
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string sOUT;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sOUT += to_string(i);
    }
    cout << sOUT.at(n - 1);
}