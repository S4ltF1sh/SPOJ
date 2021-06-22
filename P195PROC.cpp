//P195PROC - Problem C - ACM
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> Time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Time.at(i);
    }
    sort(Time.begin(), Time.end());
    int CountTime = 0, Count = 0, Sum = 0;
    for (int i = 0; i < n; i++)
    {
        CountTime += Time.at(i);
        if (CountTime > 300)
        {
            break;
        }
        Count++;
        Sum += CountTime;
    }
    cout << Count << " " << Sum;
}