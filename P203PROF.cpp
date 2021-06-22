//P203PROF - Crush
//P172SUMI - ROUND 2I - Yêu/Không Yêu
//dume de,vut la vut ca bong chu khong phai vut tung canh hoa @@
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    long long n;
    long long Sum = 0, leMin = 10005;
    cin >> n;
    vector<long long> Flower(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Flower.at(i);
        Sum += Flower.at(i);
        if (Flower.at(i) < leMin && Flower.at(i) % 2 == 1)
            leMin = Flower.at(i);
    }
    if (Sum % 2 == 1)
        cout << Sum;
    else
    {
        if (leMin == 10005)
            cout << 0;
        else
            cout << Sum - leMin;
    }
}