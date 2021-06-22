//SSAM119B - GẤP ĐÔI DÃY SỐ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k % 2 == 1)
            cout << 1 << endl;
        else
        {
            int Show = 1;
            while (k % 2 == 0)
            {
                k /= 2;
                Show += 1;
            }
            cout << Show << endl;
        }
    }
}