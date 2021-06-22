//P191PROB - Problem B - Tổng hai số
//for trau =))
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n, Sum, Count = 0;
    cin >> n >> Sum;
    vector<int> Arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Arr.at(i) + Arr.at(j) == Sum)
                Count++;
        }
    }
    cout << Count;
}