//P161PROH - ROUND 1H - Chọn chỗ
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Tanso[3005] = {0};
int Slot[3005] = {0};
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Slot[i];
        Tanso[Slot[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (Tanso[i] == 0)
        {
            cout << i;
            return 0;
        }
    }
    cout << n + 1;
    return 0;
}