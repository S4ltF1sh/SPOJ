//P155SUMI - ROUND 5I - Lựa chọn dãy số
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int Arr[100]={0};
    for (int i = 1; i <= m; i++)
    {
        cin >> Arr[i];
    }
    sort(Arr + 1, Arr + m + 1);
    int SubMin = 1000005;
    for (int i = 1; i <= m - n + 1; i++)
    {
        int tmp = Arr[i + n - 1] - Arr[i];
        SubMin = min(SubMin, tmp);
    }
    cout << SubMin;
    return 0;
}