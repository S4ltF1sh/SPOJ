//BCATM3 - ATM 3
//test long, khong can dung quy hoach dong
#include <iostream>
using namespace std;
int Value[10] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, Count = 0;
        cin >> n;
        for (int i = 0; i < 9; i++)
        {
            int tmp = n / Value[i];
            Count += tmp;
            n -= Value[i] * tmp;
            if (n == 0)
                break;
        }
        cout << Count << endl;
    }
}