//PTIT135G - Blackjack
/*
Dòng 1 chứa 2 số N và M. (N <= 100, M <= 500 000)
Dòng 2 chứa N số nguyên dương, mỗi số không quá 100 000.
=> N be nen for trau =))
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n, m, Max = 0;
    cin >> n >> m;
    vector<int> Deck(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Deck.at(i);
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int Check = Deck.at(i) + Deck.at(j) + Deck.at(k);
                if (Check <= m && Check > Max)
                    Max = Check;
            }
        }
    }
    cout << Max << endl;
    return 0;
}