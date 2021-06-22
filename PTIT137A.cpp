//PTIT137A - BÀI A - TRÒ CHƠI VỚI DÃY SỐ
#include <iostream>
#include <vector>
using namespace std;
bool Check_Break(vector<int> Arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (Arr.at(i) != Arr.at(i - 1))
            return false;
    }
    return true;
}
void Change(vector<int> &Arr, int n)
{
    int tmp = Arr.at(0);
    for (int i = 0; i < n - 1; i++)
    {
        Arr.at(i) = abs(Arr.at(i) - Arr.at(i + 1));
    }
    Arr.at(n - 1) = abs(Arr.at(n - 1) - tmp);
}
int main()
{
    while (1)
    {
        int Check = 1;
        int Run = 0;
        vector<int> Arr(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> Arr.at(i);
        }
        if (Check_Break(Arr, 4) == true && Arr.at(0) == 0)
            return 0;
        if (Check_Break(Arr, 4) == true)
        {
            cout << 0 << endl;
            continue;
        }
        while (1)
        {
            Run++;
            Change(Arr, 4);
            if (Check_Break(Arr, 4) == true)
            {
                cout << Run << endl;
                Check = 0;
                break;
            }
        }
    }
    return 0;
}