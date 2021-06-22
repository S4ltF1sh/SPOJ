//P176PROH - ROUND 6H - Bạn bè
//gap mat 26/3
//diem gap toi uu nhat chinh la o nha cua nguoi o giua:
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    vector<long long> Local(3);
    for (long long i = 0; i < 3; i++)
        cin >> Local.at(i);
    sort(Local.begin(), Local.end());
    cout << Local.at(2) - Local.at(0) << endl;
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