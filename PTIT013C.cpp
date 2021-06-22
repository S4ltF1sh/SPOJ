//PTIT013C - BÀI C - Khoảng cách
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
void Run()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y1 > 0 && y2 > 0)
        y2 = -y2;
    else if (y1 < 0 && y2 < 0)
        y2 = -y2;
    cout << (long long)sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;
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