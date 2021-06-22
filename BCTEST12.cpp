//BCTEST12 - Biến đổi chuỗi
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
            s.at(i) += 32;
        if (s.at(i) == 'a' || s.at(i) == 'o' || s.at(i) == 'y' || s.at(i) == 'e' || s.at(i) == 'u' || s.at(i) == 'i')
            s.at(i) = '\0';
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '\0')
        {
            cout << "." << s.at(i);
        }
    }
    return 0;
}