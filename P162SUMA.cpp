//P162SUMA - Round 2A - Xếp que
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int Count = 0;
    bool DKcan = false;
    vector<int> Que(6);
    vector<int> Tanso(10, 0);
    for (int i = 0; i < 6; i++)
    {
        cin >> Que.at(i);
        Tanso.at(Que.at(i))++;
    }
    for (int i = 1; i <= 9; i++)
        if (Tanso.at(i) >= 4)
        {
            DKcan = true;
            Tanso.at(i) -= 4;
            break;
        }
    if (DKcan == true)
    {
        for (int i = 1; i <= 9; i++)
            if (Tanso.at(i) != 0)
                Count++;
    }
    else
    {
        cout << "Alien";
        return 0;
    }
    if (Count == 2)
        cout << "Bear";
    else
        cout << "Elephant";
}