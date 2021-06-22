//P167PROC - ROUND 7C - Ký tự lặp trong 2 xâu liên tiếp

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
using namespace std;
vector<string> Data(12);
int n, Min = 100000;
bool DanhDau[15] = {};
int tmpCount = 0;
void Init()
{
    for (int i = 1; i <= n; i++)
        getline(cin, Data[i]);
}

bool Binary_Search(int Left, int Right, string s, char nCheck)
{
    while (Right >= Left)
    {
        int Mid = (Left + Right) / 2;
        if (s[Mid] == nCheck)
            return true;
        if (s[Mid] < nCheck)
            Left = Mid + 1;
        else
            Right = Mid - 1;
    }
    return false;
}

int Count1(string s1, string s2)
{
    int Cnt = 0;
    for (int i = 0; i < s1.length(); i++)
        if (Binary_Search(0, s2.length() - 1, s2, s1[i]) == true)
            Cnt++;
    return Cnt;
}

int Count2(string s)
{
    int Cnt = 0;
    for (int i = 0; i < n - 1; i++)
        Cnt += Count1(Data[s[i] - '0'], Data[s[i + 1] - '0']);
    return Cnt;
}

void Sinh(int vt, string s)
{
    int tmp = Count2(s);
    //stop:
    if (vt > n)
    {
        int tmp = Count2(s);
        if (tmp < Min)
            Min = tmp;
        return;
    }

    //call de_quy:
    for (int i = 1; i <= n; i++)
    {
        if (DanhDau[i] == false)
        {
            DanhDau[i] = true;
            Sinh(vt + 1, s + to_string(i));
            //sau khi de quy can tra ve danh dau = false de co the su dung i cho cac nhanh khac:
            DanhDau[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin.ignore();
    Init();
    Sinh(1, "");
    cout << Min;
};