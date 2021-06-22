//P157PROA - ROUND 7A - Số may mắn
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    int a;
    int n;
    cin >> a;
    int Max = 0;
    vector<int> Tanso(1001, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        Tanso.at(n)++;
        if (Tanso.at(n) > Max)
            Max = Tanso.at(n);
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (Tanso.at(i) == Max)
        {
            cout << i << endl;
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}