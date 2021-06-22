//BCPP - Số phong phú
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const int Max = 1000000;
vector<int> Arr(1e6 + 5, 0);
void Sang_Uoc()
{
    for (int i = 1; i <= Max; i++)
        Arr.at(i) = 0;
    Arr.at(0) = 0;
    for (int i = 1; i <= Max; i++)
    {
        for (int j = 1; j <= Max / i; j++)
            Arr.at(i * j) += i;
    }
}

int main()
{
    int L, R;
    cin >> L >> R;
    Sang_Uoc();
    int Count = 0;
    for (int i = L; i <= R; i++)
    {
        if (Arr.at(i) - i > i)
            Count++;
    }
    cout << Count;
    return 0;
}