//P185SUMJ - ROUND 5J - Nhà hàng của JH
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int n1, n2, Res = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tmp, n;
    cin >> n >> n1 >> n2;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 1)
        {
            if (n1 > 0)
                n1--;
            else
            {
                if (n2 > 0)
                {
                    n2--;
                    n1++;
                }
                else
                    Res++;
            }
        }
        if (tmp == 2)
        {
            if (n2 > 0)
                n2--;
            else
                Res += 2;
        }
    }
    cout << Res;
}