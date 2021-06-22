//CPPPRI18 - PRIME 18
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
void Run()
{
    long long m, n, a, b, Count = 0;
    cin >> m >> n >> a >> b;
    for (int i = m; i <= n; i++)
        if (i % a == 0 || i % b == 0)
            Count++;
    cout << Count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}