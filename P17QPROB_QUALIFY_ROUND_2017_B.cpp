//P17QPROB - QUALIFY ROUND 2017 B - GHÉP XÂU
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
//so sanh chuoi theo thu tu tu dien tang dan
bool cmp(string x, string y)
{
    if ((x + y) < (y + x))
        return true;
    return false;
}
void Run()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> Data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Data.at(i);
    }
    sort(Data.begin(), Data.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << Data.at(i);
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