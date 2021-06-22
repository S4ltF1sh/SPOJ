//P204PROD - DÃY SỐ TỔNG LẺ
//le * le = le, con lai deu la chan
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Show(int nle, int nch)
{
    if (nle == 0 || (nch == 0 && nle % 2 == 0))
        cout << "NO\n";
    else
        cout << "YES\n";
}
void Run()
{
    int n, tmp, nle = 0, nch = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp % 2 == 0)
            nch++;
    }
    nle = n - nch;
    Show(nle, nch);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}