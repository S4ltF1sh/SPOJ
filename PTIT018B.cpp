//PTIT018B - ACM PTIT 2018 B - HAI DÃY SỐ HỢP NHAU
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    int n, Check = 1;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; i++)
        cin >> A.at(i);
    for (int i = 0; i < n; i++)
        cin >> B.at(i);
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < n; i++)
        if (A.at(i) > B.at(i))
        {
            Check = 0;
            break;
        }
    if (Check == 1)
        cout << "YES\n";
    else
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