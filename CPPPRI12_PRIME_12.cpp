//CPPPRI12 - PRIME 12 
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Show(int n, int k)
{
    vector<int> UNT;
    UNT.push_back(0);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                UNT.push_back(i);
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        UNT.push_back(n);
    }
    if (k > UNT.size() - 1)
        cout << -1 << endl;
    else
        cout << UNT.at(k) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Show(n, k);
    }
    return 0;
}