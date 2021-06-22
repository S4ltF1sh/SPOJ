//P174PROE - ROUND 4E - Bài toán khó
//chỉ co 3 so khac nhau va cần 3 số tạo thành cáp số cộng 
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<long long> Check(1, -1);
    int n, k = 0;
    long long tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        for (int j = 0; j < Check.size(); j++)
        {
            if (tmp == Check.at(j))
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            Check.push_back(tmp);
        else
            k = 0;
        if (Check.size() > 4)
        {
            cout << "NO";
            return 0;
        }
    }
    if (Check.size() < 4)
        cout << "YES";
    else
    {
        sort(Check.begin(), Check.end());
        if (Check.at(3) - Check.at(2) == Check.at(2) - Check.at(1))
            cout << "YES";
        else
            cout << "NO";
    }
}