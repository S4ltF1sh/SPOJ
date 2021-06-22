//BCMULONE - Nhân 1
//https://cachhoc.net/2013/09/24/thuat-toan-tinh-binh-phuong-cua-1-so-gom-n-so-1/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n > 9)
        {
            string Res = "";
            string s1 = "123456790", s2 = "098765432";
            int n1 = (n - 1) / 9, n2 = n - 9 * n1;
            // doan dau
            for (int i = 0; i < n1; i++)
                Res += s1;
            // doan giua
            for (int i = 1; i <= n2; i++)
                Res.push_back((char(i) + '0'));
            for (int i = n2 - 1; i > 0; i--)
                Res.push_back((char(i) + '0'));
            Res.pop_back();
            // doan cuoi
            for (int i = 0; i < n1; i++)
                Res += s2;
            cout << Res + "1";
        }
        else
        {
            for (int i = 1; i <= n; i++)
                cout << i;
            for (int i = n - 1; i >= 1; i--)
                cout << i;
        }
        cout << endl;
    }
}