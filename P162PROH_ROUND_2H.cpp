//P162PROH - ROUND 2H - Tính sát thương
//note: Base Dame = 1;
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int hp;
    int Count = 0;
    int Dame = 1;
    cin >> hp;
    for (int i = 2;; i++)
    {
        Dame += i;
        hp = hp - Dame;
        Count++;
        if (hp <= 0)
        {
            cout << Count;
            return 0;
        }
    }
    return 0;
}