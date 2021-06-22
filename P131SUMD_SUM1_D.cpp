#include <iostream>
#include <vector>
#include <string>
using namespace std;
string Six(string &s1)
{
    int Len1 = s1.size();
    for (int i = 0; i < Len1; i++)
    {
        if (s1.at(i) == '5')
        {
            s1.at(i) == '6';
        }
    }
    return s1;
}
string Five(string &s1)
{
    int Len1 = s1.size();
    for (int i = 0; i < Len1; i++)
    {
        if (s1.at(i) == '6')
        {
            s1.at(i) == '5';
        }
    }
    return s1;
}
int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << stoi(Five(s1)) + stoi(Five(s2)) << " " << stoi(Six(s1)) + stoi(Six(s2));
    return 0;
}