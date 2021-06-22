//SSAM219J - DÃY CON LIÊN TIẾP TỔNG BẰNG K
//tong tien to
//Binary Search
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
bool BinarySearch(int Right, int Left, long long a[], long long Need_Search)
{
    while (Left <= Right)
    {
        int Mid = (Right + Left) / 2;
        if (a[Mid] == Need_Search)
            return true;
        if (a[Mid] > Need_Search)
            Right = Mid - 1;
        else
            Left = Mid + 1;
    }
    return false;
}
void Creat(int n, long long TienTo[], long long Value[])
{
    cin.tie(0);
    cin >> Value[0];
    TienTo[0] = Value[0];
    for (int i = 1; i < n; i++)
    {
        cin >> Value[i];
        TienTo[i] = TienTo[i - 1] + Value[i];
    }
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    long long TienTo[100005] = {0};
    long long Value[100005] = {0};
    int n;
    long long k;
    cin >> n >> k;
    Creat(n, TienTo, Value);
    //Check 1:
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (Value[i] == 0)
            {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
        return;
    }
    //Check 2 + 3:
    for (int i = 0; i < n; i++)
    {
        if (k == TienTo[i])
        {
            cout << "YES\n";
            return;
        }
        if (BinarySearch(n - 1, 0, TienTo, TienTo[i] - k) == true)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}