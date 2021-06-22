//SSAM219D - BỘ BA SỐ PYTAGO=
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
bool Binary_Search(long long Left, long long Right, long long A[], long long Need_Search)
{
    while (Left <= Right)
    {
        long long Mid = (Left + Right) / 2;
        if (A[Mid] == Need_Search)
            return true;
        else if (A[Mid] > Need_Search)
            Right = Mid - 1;
        else
            Left = Mid + 1;
    }
    return false;
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    //Max khong can kiem tra
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
        {
            long long tmp = A[i] * A[i] + A[j] * A[j];
            long long Check = sqrt(tmp);
            if (Check * Check == tmp && Binary_Search(j, n - 1, A, Check) == true)
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