//PTIT127I - Bán vé số
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        int Run = n * 6;
        vector<int> tanso(50, 0);
        int k, Check = 1;
        while (Run > 0)
        {
            Run--;
            cin >> k;
            tanso.at(k)++;
        }
        for (int i = 1; i <= 49; i++)
        {
            if (tanso.at(i) == 0)
            {
                cout << "No" << endl;
                Check = 0;
                break;
            }
        }
        if (Check == 1)
            cout << "Yes" << endl;
    }
    return 0;
}