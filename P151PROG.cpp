//P151PROG - ROUND 1G - Xếp hàng
//0 x => Vitri[2]=x; xet cot 1 neu so nao chi xuat hien dung 1 lan o trong ca 2 cot thi so do la so o Vtri[1]
//=>suy ra ca hang
//test dac biet :
/*
3
0 2
1 3
2 0
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
struct Data
{
    int Col2;
    int Tanso_Col1 = 0;
};
map<int, Data> Line;
void Show(vector<int> Vitri, int n)
{
    cout.tie(0);
    for (int i = 1; i <= n; i++)
        cout << Vitri[i] << " ";
}
void Creat(int n, vector<int> &Vitri)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tmp1, tmp2;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        Line[tmp1].Col2 = tmp2;
        Line[tmp1].Tanso_Col1++;
        Line[tmp2].Tanso_Col1++;
        if (tmp1 == 0)
            Vitri[2] = tmp2;
    }
    for (auto i : Line)
    {
        if (i.second.Tanso_Col1 == 1 && i.second.Col2 != 0)
        {
            Vitri[1] = i.first;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        Vitri[i + 2] = Line[Vitri[i]].Col2;
        if (i + 2 == n)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> Vitri(n + 2, 0);
    Creat(n, Vitri);
    Show(Vitri, n);
}