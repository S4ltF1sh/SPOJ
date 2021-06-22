//PTIT127A - Tổ chức kì thi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Nam, Nu, Take;
    cin >> Nu >> Nam >> Take;
    int nTeam_Max, nRemain;
    if (Nu / 2 < Nam)
        nTeam_Max = Nu / 2;
    else
        nTeam_Max = Nam;
    nRemain = (Nu - nTeam_Max * 2) + (Nam - nTeam_Max);
    if (nRemain > Take)
        cout << nTeam_Max;
    else
    {
        Take -= nRemain;
        //1 team co 3 nguoi:
        if (Take % 3 == 0)
            cout << nTeam_Max - Take / 3;
        else
            cout << nTeam_Max - 1 - Take / 3;
    }
}