//P174PROF - ROUND 4F - Điểm danh
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long Sum1_to_n[1000006];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> Name;
    Sum1_to_n[0] = 0;
    string tmp;
    long long n, k, Nail;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        Name.push_back(tmp);
        Sum1_to_n[i] = Sum1_to_n[i - 1] + i;
        if (Sum1_to_n[i] <= k)
            Nail = i;
    }
    sort(Name.begin(), Name.end());
    //neu bang chung to doc vua het luot cua nguoi thu Nail cungx dung la ten nguoi do luon:
    if (Sum1_to_n[Nail] == k)
        cout << Name.at(Nail);
    //neu khong chung to Sum1_to_n[Nail]<k => ten thu k duoc doc len cach ten thu Nail 1 khoang k-Sum1_to_n
    else
    {
        k = k - Sum1_to_n[Nail];
        cout << Name.at(k - 1);
    }
}