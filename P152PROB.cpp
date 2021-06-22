// /P152PROB - ROUND 2B - Phân nhóm
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
void Creat(int n, int Value[], int Sub[])
{
    cin.tie(0);
    for (int i = 0; i < n; i++)
        cin >> Value[i];
    sort(Value, Value + n);
    for (int i = 1; i < n; i++)
        Sub[i - 1] = Value[i] - Value[i - 1];
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, Count = 1;
    cin >> n >> k;
    int Value[n + 1] = {0};
    int Sub[n + 1] = {0};
    Creat(n, Value, Sub);
    for (int i = 0; i < n - 1; i++)
        if (Sub[i] > k)
            Count++;
    cout << Count;
}
int main() { Run(); }
