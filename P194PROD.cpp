//P194PROD - Problem D - Chia cắt
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    int n, Min = 10000, Max = -10000, localMax, localMin;
    cin >> n;
    vector<int> Arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> Arr.at(i);
        if (Arr.at(i) < Min)
        {
            Min = Arr.at(i);
            localMin = i;
        }
        if (Arr.at(i) > Max)
        {
            Max = Arr.at(i);
            localMax = i;
        }
    }
    //neu Min nam sau Max thi doi cho de tien tinh toan
    if (localMin > localMax)
        swap(localMax, localMin);
    if (n - localMax > localMin - 1)
        //doi cho Max ve cuoi day
        cout << n - localMin;
    else
        //doi cho Min ve dau day
        cout << localMax - 1;
}