//P154PROC - ROUND 4C - Về quê
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char Bus[4][11];
    for (int j = 0; j < 11; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (j == 0)
            {
                if (n > 0)
                {
                    Bus[i][j] = 'O';
                    n--;
                }
                else
                    Bus[i][j] = '#';
            }
            else
            {
                if (n > 0 && i != 2)
                {
                    Bus[i][j] = 'O';
                    n--;
                }
                else if (i == 2)
                    Bus[i][j] = '.';
                else
                    Bus[i][j] = '#';
            }
        }
    }
    cout << "+------------------------+\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "|";
        for (int j = 0; j < 11; j++)
        {
            cout << Bus[i][j] << ".";
        }
        if (i == 0)
            cout << "|D|)";
        else if (i == 3)
            cout << "|.|)";
        else if (i == 1)
            cout << "|.|";
        else
            cout << "..|";
        cout << endl;
    }
    cout << "+------------------------+";
}
