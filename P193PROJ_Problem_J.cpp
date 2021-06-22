//P193PROJ - Problem J - Tam Giác
//chắc chắn phải là tam giác vuông và 2 cạnh góc vuông phải <= 2 cạnh của hcn theo thứ tự lớn bé (phải sort trước)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    vector<long long> CN(2);
    vector<long long> TG(3);
    cin >> CN[0] >> CN[1];
    cin >> TG[0] >> TG[1] >> TG[2];
    sort(CN.begin(), CN.end());
    sort(TG.begin(), TG.end());
    if (TG.at(0) + TG.at(1) > TG.at(2) && TG.at(0) + TG.at(2) > TG.at(1) && TG.at(1) + TG.at(2) > TG.at(0))
    {
        if (TG.at(0) * TG.at(0) + TG.at(1) * TG.at(1) == TG.at(2) * TG.at(2))
        {
            if (TG.at(0) <= CN.at(0) && TG.at(1) <= CN.at(1))
            {
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else
            cout << "NO";
    }
    else
        cout << "NO";
}