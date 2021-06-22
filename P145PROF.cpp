//P145PROF - ROUND 5F - Quán cà phê
//Quán cà phê mất không quá 1 phút để phục vụ một khách hàng.
//=> chi nhieu khach toi cung 1 luc moi can tang them nhan vien
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<vector<int>> Time(24, vector<int>(60));
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, Hour, Minutes, Count = 0;
    cin >> n;
    while (n--)
    {
        cin >> Hour >> Minutes;
        Time[Hour][Minutes]++;
        if (Count < Time[Hour][Minutes])
            Count++;
    }
    cout << Count;
}