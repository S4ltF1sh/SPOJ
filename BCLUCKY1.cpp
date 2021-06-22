//BCLUCKY1 - Số gần may mắn
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Count = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '4' || s.at(i) == '7')
            Count++;
    }
    if (Count == 4 || Count == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}