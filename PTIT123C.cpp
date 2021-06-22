//PTIT123C - Chứng khoán
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    int Val;
    int index;
};
bool cmp(Data x, Data y)
{
    if (x.Val == y.Val)
        return x.index < y.index;
    return x.Val < y.Val;
}
bool cmp2(Data x, Data y)
{
    if (x.index > y.index)
        return false;
    return true;
}
bool cmp3(Data x, Data y)
{
    if (x.index < y.index)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k1, k2;
    int stt = 0;
    while (1)
    {
        stt++;
        cin >> n >> k1 >> k2;
        if (n == k1 && n == k2 && n == 0)
            return 0;
        vector<Data> Chung_Khoan(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Chung_Khoan.at(i).Val;
            Chung_Khoan.at(i).index = i + 1;
        }
        sort(Chung_Khoan.begin(), Chung_Khoan.end(), cmp);
        sort(Chung_Khoan.begin(), Chung_Khoan.begin() + k1, cmp2);
        sort(Chung_Khoan.begin() + (n - k2), Chung_Khoan.end(), cmp3);
        cout << "Case " << stt << endl;
        for (int i = 0; i < k1; i++)
        {
            cout << Chung_Khoan.at(i).index << " ";
        }
        cout << endl;
        for (int i = n - k2; i < n; i++)
        {
            cout << Chung_Khoan.at(i).index << " ";
        }
        cout << endl;
    }
}
