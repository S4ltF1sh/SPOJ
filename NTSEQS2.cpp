//NTSEQS2 - Dãy có tổng bằng S
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n, S, tmp;
    int DanhDau[40005] = {0};
    cin >> n >> S;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        //Sum = a co the tao ra
        DanhDau[tmp] = 1;
        //Sum = j - tmp co the tao ra && Sum = tmp co the tao ra => Sum = j co the tao ra
        for (int j = S; j >= tmp; j--)
            if (DanhDau[j - tmp] == 1)
                DanhDau[j] = 1;
    }
    if (DanhDau[S] == 1)
        cout << "YES";
    else
        cout << "NO";
}