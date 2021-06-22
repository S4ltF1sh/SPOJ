//P133SUMF - SUM3 F - Cấp số cộng
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int Arr[3];
    cin >> Arr[0] >> Arr[1] >> Arr[2];
    sort(Arr, Arr + 3);
    int d = min((Arr[1] - Arr[0]), (Arr[2] - Arr[1]));
    //cout << d << endl;
    for (int i = 0; i < 2; i++)
    {
        if ((Arr[i] + d) != Arr[i + 1])
        {
            cout << Arr[i] + d;
            return 0;
        }
    }
    cout << Arr[2] + d;
    return 0;
}