//P151SUMB - ROUND 1B - Đong gạo
//m = 5x + 3y
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
bool Check(double tmp)
{
    if (tmp == (int)tmp)
        return true;
    return false;
}
int main()
{
    double m;
    int nBao = 10000, Can = 0;
    cin >> m;
    for (int i = 0; i <= m / 3; i++)
    {
        double tmp = (m - 3.0 * (double)i) / 5.0;
        if (Check(tmp) == true)
        {
            if ((int)tmp + i < nBao)
                nBao = (int)tmp + i;
            Can = 1;
        }
    }
    if (Can == 0)
        cout << -1;
    else
        cout << nBao;
}
