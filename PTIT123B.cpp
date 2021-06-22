//PTIT123B - Đếm số lần lặp
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
    int stt = 0;
    int n;
    while (1)
    {
        int Check = 1;
        stt++;
        cin >> n;
        if (n == 0)
            break;
        int Run = 0;
        vector<int> Arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Arr.at(i);
        }
        if (Check_Break(Arr, n) == true)
        {
            cout << "Case " << stt << ": " << 0 << " iterations" << endl;
            continue;
        }
        while (Run < 1000)
        {
            Run++;
            Change(Arr, n);
            if (Check_Break(Arr, n) == true)
            {
                cout << "Case " << stt << ": " << Run << " iterations" << endl;
                Check = 0;
                break;
            }
        }
        if (Check == 1)
            cout << "Case " << stt << ": not attained" << endl;
    }
    return 0;
}