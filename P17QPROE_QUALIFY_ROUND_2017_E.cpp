//P17QPROE - QUALIFY ROUND 2017 E - DÃY SỐ ĐỐI XỨNG
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, Count = 0;
    cin >> n;
    long long Arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    for (long long i = 0, j = n - 1; i < n, j >= 0;)
    {
        if (Arr[i] == Arr[j])
        {
            i++;
            j--;
            if (i >= j)
                break;
        }
        else
        {
            if (Arr[i] > Arr[j])
            {
                Arr[j - 1] += Arr[j];
                Count++;
                j--;
            }
            else
            {
                Arr[i + 1] += Arr[i];
                Count++;
                i++;
            }
        }
    }
    cout << Count;
}