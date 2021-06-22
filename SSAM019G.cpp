//SSAM019G - DÃY XÂU FIBONACI)(RTE)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
string Fibonacci(int n)
{
    string s1 = "A";
    string s2 = "B";
    if (n == 1)
        return s1;
    if (n == 2)
        return s2;
    string s;
    for (int i = 3; i <= n; i++)
    {
        s = s1 + s2;
        s1 = s2;
        s2 = s;
    }
    return s;
}
void Run()
{
    int n, i;
    cin >> n >> i;
    cout << Fibonacci(n).at(i - 1) << endl;
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