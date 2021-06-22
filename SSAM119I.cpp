//SSAM119I - BỐN ĐIỂM TRÊN MẶT PHẲNG
//https://hoc247.vn/bai-6-ung-dung-tich-co-huong-chung-minh-bon-diem-khong-dong-phang-2395.html
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct VECTOR
{
    int x, y, z;
};
void Run()
{
    VECTOR a, b, c, d;
    cin >> a.x >> a.y >> a.z;
    cin >> b.x >> b.y >> b.z;
    cin >> c.x >> c.y >> c.z;
    cin >> d.x >> d.y >> d.z;
    VECTOR Ab = {b.x - a.x, b.y - a.y, b.z - a.z};
    VECTOR Ac = {c.x - a.x, c.y - a.y, c.z - a.z};
    VECTOR Ad = {d.x - a.x, d.y - a.y, d.z - a.z};
    VECTOR AbAc = {Ab.y * Ac.z - Ac.y * Ab.z, Ab.z * Ac.x - Ac.z * Ab.x, Ab.x * Ac.y - Ac.x * Ab.y};
    long long Check = AbAc.x * Ad.x + AbAc.y * Ad.y + AbAc.z * Ad.z;
    if (Check == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}