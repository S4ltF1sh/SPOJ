//CPPREA05 - Re-arrang Array 5
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> Arr(n);
        vector<int> Min;
        vector<int> Max;
        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }
        sort(Arr.begin(), Arr.end());
        for (int i = 0; i < n / 2; i++)
            Min.push_back(Arr[i]);
        for (int i = n - 1; i >= n / 2; i--)
            Max.push_back(Arr[i]);
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << Max.at(i) << " " << Min.at(i) << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << Max.at(i) << " " << Min.at(i) << " ";
            }
            cout << Max.at(n / 2);
            cout << endl;
        }
    }
}