//SSAM019L - CHIA TAM GIÁC
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
void Run()
{
    int n;
    double h;
    cin >> n >> h;
    for (int i = 1; i < n; i++)
    {
        cout << fixed << setprecision(6) << sqrt(i * h * h / n) << " ";
    }
    cout << endl;
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