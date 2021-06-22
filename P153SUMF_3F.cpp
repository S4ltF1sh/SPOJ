#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> tanso(500);
    string s;
    int n;
    cin >> n;
    cin.ignore();
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
            s.at(i) += 32;
        tanso.at(s.at(i))++;
    }
    bool Check = true;
    for (int i = (int)'a'; i <= (int)'z'; i++)
    {
        if (tanso.at(i) == 0)
        {
            Check = false;
            break;
        }
    }
    if (Check == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}