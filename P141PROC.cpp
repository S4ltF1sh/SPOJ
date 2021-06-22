//P141PROC - ROUND 1C - BIT operator
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int Step;
    int n = 0;
    cin >> Step;
    cin.ignore();
    for (int i = 0; i < Step; i++)
    {
        string s;
        getline(cin, s);
        if (s == "X++")
            n++;
        else if (s == "++X")
            ++n;
        else if (s == "--X")
            --n;
        else if (s == "X--")
            n--;
    }
    cout << n;
}