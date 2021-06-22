//P183SUMJ - ROUND 3J - Dấu vân tay
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> Arr(n);
    vector<int> VanTay(m);
    vector<bool> DanhDau(10, false);
    for (int i = 0; i < n; i++)
        cin >> Arr.at(i);
    for (int i = 0; i < m; i++)
    {
        cin >> VanTay.at(i);
        DanhDau.at(VanTay.at(i)) = true;
    }
    for (int i = 0; i < n; i++)
        if (DanhDau.at(Arr.at(i)) == true)
            cout << Arr.at(i) << " ";
}