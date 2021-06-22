//P175PROF - ROUND 5F - Biến đổi xy
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    string s;
    getline(cin, s);
    int CountX = 0;
    int CountY = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'x')
            CountX++;
        else
            CountY++;
    }
    if (CountX >= CountY)
        for (int i = 1; i <= CountX - CountY; i++)
            cout << "x";
    else
        for (int i = 1; i <= CountY - CountX; i++)
            cout << "y";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
    return 0;
}