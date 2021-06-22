//P155PROB - ROUND 5B - Cùng bet với EarthShaker
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> Bet(5);
    int x, s;
    cin >> x >> s;
    int Creep = x * s;
    for (int i = 0; i < 5; i++)
    {
        cin >> Bet.at(i);
        Bet.at(i) -= Creep;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << Bet.at(i) << " ";
    }
    return 0;
}