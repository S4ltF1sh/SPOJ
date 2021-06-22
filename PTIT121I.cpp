#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Show(int n, string s, int stt)
{
    cout << stt << " ";
    for (int i = 0; i < s.length(); i++)
    {
        int Run = n;
        while (Run--)
        {
            cout << s.at(i);
        }
    }
    cout << endl;
}
void Run()
{
    int n;
    int stt;
    string s;
    cin >> stt >> n;
    cin >> s;
    Show(n, s, stt);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}