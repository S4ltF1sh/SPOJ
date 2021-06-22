//P163PROH - ROUND 3H - Vẽ đa giác
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    float Goc;
    cin >> Goc;
    float Dinh = 2.0 / (1 - Goc / 180.0);
    if (Dinh * 1000 == (int)Dinh * 1000)
        cout << "YES\n";
    else
        cout << "NO\n";
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