//P166SUMA - ROUND 6A - Captain Boomerang
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> DanhDau(5005, 0);
int main()
{
    int n, Count = 0;
    cin >> n;
    vector<int> Arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr.at(i);
        DanhDau.at(Arr.at(i)) = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (DanhDau.at(i) == 0)
            Count++;
    }
    cout << Count;
    return 0;
}