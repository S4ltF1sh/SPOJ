//P194PROA - Problem A - Teamwork
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n, Count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int CountCH = 0;
        int tmp;
        for (int j = 0; j < 3; j++)
        {
            cin >> tmp;
            if (tmp == 1)
                CountCH++;
        }
        if (CountCH >= 2)
            Count++;
    }
    cout << Count;
}
