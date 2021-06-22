//P164SUMH - ROUND 4H - Xây tháp
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
    int Count = 0, Num = 0;
    for (int i = 1;; i++)
    {
        Num += i;
        if (n >= Num)
        {
            Count++;
            n -= Num;
        }
        else
        {
            cout << Count;
            return 0;
        }
    }
}