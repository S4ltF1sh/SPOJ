//P179PROA - ROUND 9A - TIẾN HÓA POKEMON
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    string Name;
    int Need_Stone;
    int Have_Stone;
    int evolNumber = 0;
    int index;
};
bool cmp(Data x, Data y)
{
    if (x.evolNumber == y.evolNumber)
        return x.index < y.index;
    else
        return x.evolNumber > y.evolNumber;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int Sum = 0;
    vector<Data> Pokemon(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, Pokemon.at(i).Name);
        cin >> Pokemon.at(i).Need_Stone >> Pokemon.at(i).Have_Stone;
        while (Pokemon.at(i).Need_Stone <= Pokemon.at(i).Have_Stone)
        {
            Pokemon.at(i).Have_Stone = Pokemon.at(i).Have_Stone - Pokemon.at(i).Need_Stone + 2;
            Pokemon.at(i).evolNumber++;
        }
        Sum += Pokemon.at(i).evolNumber;
        Pokemon.at(i).index = i + 1;
        cin.ignore();
    }
    sort(Pokemon.begin(), Pokemon.end(), cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << Pokemon.at(i).Name << " " << Pokemon.at(i).evolNumber << endl;
    // }
    cout << Sum << endl
         << Pokemon.at(0).Name;
    return 0;
}