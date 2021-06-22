//P194SUMA - Đảo dấu
//bai nay la sap xep roi dao dau het so am,sau do tim Min roi dao dau lien tuc cua cai Min day la duoc
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    sort(a.begin(), a.end());
    long long Sum = 0, Count;
    //neu mang co so am
    if (a.at(0) < 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) < 0 && i < k)
            {
                a.at(i) = -a.at(i);
                Count = i + 1;
            }
            else
                break;
        }
        sort(a.begin(), a.end());
        if (k - Count > 0 && (k - Count) % 2 == 1)
            a.at(0) = -a.at(0);
    }
    //mang khong co so am,a.at(0) chinh la Min sau khi sort
    else if (k % 2 == 1)
        a.at(0) = -a.at(0);
    for (int i = 0; i < n; i++)
        Sum += a.at(i);
    cout << Sum;
}