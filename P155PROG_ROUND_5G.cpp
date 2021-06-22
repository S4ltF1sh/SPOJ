//P155PROG - ROUND 5G - Tặng quà
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    int index;
    int Gift_for;
};
bool cmp(Data x, Data y)
{
    return x.Gift_for < y.Gift_for;
}
int main()
{
    int n;
    cin >> n;
    vector<Data> Gift(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Gift.at(i).Gift_for;
        Gift.at(i).index = i + 1;
    }
    sort(Gift.begin(), Gift.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << Gift.at(i).index << " ";
    }
    return 0;
}