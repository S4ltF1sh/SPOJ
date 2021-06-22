//P144SUMA - ROUND 4A - Nam châm
//có trường hợp 11,00 :))
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int Count = 1;
    string s;
    getline(cin, s);
    char Check = s.at(1);
    for (int i = 1; i < n; i++)
    {
        string s;
        getline(cin, s);
        if (s.at(0) == Check)
            Count++;
        Check = s.at(1);
    }
    cout << Count;
    return 0;
}