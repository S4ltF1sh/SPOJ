//P143PROG - ROUND 3G - Chia kẹo
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, Remain;
    cin >> n >> Remain;
    if (Remain % (n - 1) == 0)
        //Min la Teo luon lay it hon 1 cai,Max la ca nha chia deu
        cout << n * (Remain / (n - 1)) - 1 << " " << n * (Remain / (n - 1));
    else
    {
        //Teo luon lay it hon
        int Teo = Remain / (n - 1);
        cout << Teo + Remain << " " << Teo + Remain;
    }
}