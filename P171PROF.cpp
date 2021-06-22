//P171PROF - ROUND 1F - Học Bổng
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, Time = 0, Result = 1; //khong tinh thang dau tien =))
    cin >> n;
    vector<long long> Time_Wait(n);
    for (long long i = 0; i < n; i++)
        cin >> Time_Wait.at(i);
    sort(Time_Wait.begin(), Time_Wait.end());
    for (long long i = 1; i < n; i++)
    {
        Time += Time_Wait.at(i - 1);
        if (Time <= Time_Wait.at(i))
            Result++;
        //nếu đã thất vọng rồi thì xuống mẹ cuối đứng để người đằng sau lên trước test,
        //vì đã thất vọng rồi thì đợi lâu thêm cũng là thất vọng :v
        else
            Time -= Time_Wait.at(i);
    }
    cout << Result;
}