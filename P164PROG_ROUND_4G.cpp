//P164PROG - ROUND 4G - Kim tự tháp
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
    int Run = 0;
    int Sum = 0;
    int Count = 0;
    while (n > Sum)
    {
        Run++;
        Sum += Run;
        if (n >= Sum)
        {
            Count++;
            n -= Sum;
        }
    }
    cout << Count;
}