//CPPREA04 - Re-arrang Array 4
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> Arr(n);
        vector<int> reArr(n);
        for (int i = 0; i < n; i++)
            cin >> Arr.at(i);
        sort(Arr.begin(), Arr.end());
        int Run = 0;
        for (int i = 0; i < n; i += 2)
            reArr.at(i) = Arr.at(Run++);
        for (int i = 1; i < n; i += 2)
            reArr.at(i) = Arr.at(Run++);
        for (int i = 0; i < n; i++)
            cout << reArr.at(i) << " ";
        cout << endl;
    }
}