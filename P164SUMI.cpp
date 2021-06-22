//P164SUMI - ROUND 4I - Next round
/*
Dòng đầu tiên gồm 2 số nguyên n, k (1 <= k <= n <= 50)
Dòng thứ 2 chứa n số nguyên a[1], a[2], …, a[n] và n số nguyên này tạo thành 
"một dãy không tăng từ trái qua phải."
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n, k, Count = 0;
    cin >> n >> k;
    vector<int> Point(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Point.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (Point.at(i) >= Point.at(k - 1) && Point.at(i) > 0)
            Count++;
    }
    cout << Count;
}