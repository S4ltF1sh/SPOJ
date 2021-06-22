//P154SUMF - ROUND 4F - Ký túc xá
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct Data
{
    int pp;
    int Max;
};
void Run(int n)
{
    vector<Data> Room(n);
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Room.at(i).pp >> Room.at(i).Max;
        if (Room.at(i).Max - Room.at(i).pp >= 2)
            Count++;
    }
    cout << Count;
}
int main()
{
    int n;
    cin >> n;
    Run(n);
    return 0;
}