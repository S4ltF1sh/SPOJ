//P131SUMC - SUM1 C - Quay bảng
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
double GiaTri(int a, int c, int b, int d, vector<double> &Arr)
{
    return (double)abs(Arr[a] / Arr[c] - Arr[b] / Arr[d]);
}
int main()
{
    int Count = 0;
    vector<double> Arr(5);
    cin >> Arr[0] >> Arr[1] >> Arr[2] >> Arr[3];
    double Result = GiaTri(0, 2, 1, 3, Arr);
    if (GiaTri(2, 3, 0, 1, Arr) > Result)
    {
        Result = GiaTri(2, 3, 0, 1, Arr);
        Count = 1;
    }
    if (GiaTri(3, 1, 2, 0, Arr) > Result)
    {
        Result = GiaTri(3, 1, 2, 0, Arr);
        Count = 2;
    }
    if (GiaTri(1, 0, 3, 2, Arr) > Result)
        Count = 3;
    cout << Count;
    return 0;
}