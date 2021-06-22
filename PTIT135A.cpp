//PTIT135A - Đỗ xe
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<int> DanhDau(120, 0);
int Res = 0;
void Show(int a, int b, int c)
{
    for (int i = 1; i < 120; i++)
    {
        if (DanhDau.at(i) == 1)
            Res += a * 1;
        else if (DanhDau.at(i) == 2)
            Res += b * 2;
        else if (DanhDau.at(i) == 3)
            Res += c * 3;
    }
    cout << Res;
}
void Run()
{
    int a, b, c;
    int tmp1, tmp2;
    cin >> a >> b >> c;
    for (int i = 1; i <= 3; i++)
    {
        cin >> tmp1 >> tmp2;
        for (int j = tmp1; j < tmp2; j++)
            DanhDau.at(j)++;
    }
    Show(a, b, c);
}
int main()
{
    Run();
}