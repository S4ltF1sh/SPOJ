//CPPCOM02 - COMINATION 2
//sinh to hop:
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Show(vector<int> &Result, int k)
{
    for (int i = 1; i < Result.size(); i++)
        cout << Result.at(i);
    cout << " ";
}
void Sinh(int i, vector<int> &Result, int n, int k)
{
    for (int j = Result.at(i - 1) + 1; j <= n - k + i; j++)
    {
        Result.at(i) = j;
        if (i == k)
            Show(Result, k);
        else
            Sinh(i + 1, Result, n, k);
    }
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> Result(k + 1, 0);
    Sinh(1, Result, n, k);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}