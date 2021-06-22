//BCJABUKE - Nhặt táo
#include <iostream>
using namespace std;
int main()
{
    int n, m, j, Local, Step = 0;
    cin >> n >> m >> j;
    int L = 1, R = L + m - 1;
    while (j--)
    {
        cin >> Local;
        if (Local < L)
        {
            Step += L - Local;
            L = Local;
            R = L + m - 1;
        }
        else if (Local > R)
        {
            Step += Local - R;
            R = Local;
            L = R + 1 - m;
        }
    }
    cout << Step;
}