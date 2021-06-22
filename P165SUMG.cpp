//P165SUMG - ROUND 5G - Chiến hữu(time)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
bool Check(double tmp)
{
    if (tmp == (long long)tmp)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long m, Drow, Medusa, Check = 0;
        cin >> m >> Drow >> Medusa;
        //chia cho so lon de giam vong for
        if (Drow > Medusa)
            swap(Drow, Medusa);
        long long nMedusa = m / Medusa, nDrow;
        for (long long i = nMedusa; i >= 0; i--)
        {
            long long dmDrow = m - i * Medusa;
            if (dmDrow % Drow == 0)
            {
                Check = 1;
                cout << dmDrow / Drow + i << endl;
                break;
            }
        }
        if (Check == 0)
            cout << -1 << endl;
    }
}
