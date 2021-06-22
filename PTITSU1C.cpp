//PTITSU1C - Bài C - PTIT Summer 1
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
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
    }
    return 0;
}