//PTIT015I - ACM PTIT 2015 I - Hàng đợi tác vụ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, time, Count = 0;
        cin >> n >> time;
        vector<int> Time_Check(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Time_Check.at(i);
            if (time >= Time_Check.at(i))
            {
                Count++;
                time -= Time_Check.at(i);
            }
            else
                time = -1;
        }
        cout << Count << endl;
    }
}