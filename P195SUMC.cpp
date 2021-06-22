//P195SUMC - Bán vé
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct HAVING
{
    int M_25 = 0;
    int M_50 = 0;
    int M_100 = 0;
};
int main()
{
    vector<HAVING> Wallet(1);
    int n;
    cin >> n;
    vector<int> Check(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Check.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        int tmp = Check.at(i);
        if (tmp == 25)
            Wallet.at(0).M_25++;
        else if (tmp == 50)
        {
            Wallet.at(0).M_25--;
            Wallet.at(0).M_50++;
            if (Wallet.at(0).M_25 < 0)
            {
                cout << "NO";
                return 0;
            }
        }
        else if (tmp == 100)
        {
            Wallet.at(0).M_25--;
            Wallet.at(0).M_50--;
            Wallet.at(0).M_100++;
            if (Wallet.at(0).M_25 < 0 || Wallet.at(0).M_50 < 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
