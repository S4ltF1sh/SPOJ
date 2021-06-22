//PTIT135I - Nhìn và đọc
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    string s;
    int Count = 1;
    getline(cin, s);
    s.push_back('o');
    for (int i = 1; i < s.length(); i++)
    {
        if (s.at(i) == s.at(i - 1))
            Count++;
        else
        {
            cout << Count << s.at(i - 1);
            Count = 1;
        }
    }
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