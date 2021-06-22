//PTIT015H - ACM PTIT 2015 H - Thu gọn
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            s += to_string(i);
        }
        //cout << s << endl;
        int Run = 1;
        while (1)
        {
            if (s.length() == 1)
            {
                cout << s;
                cout << endl;
                break;
            }
            Run++;
            string sTMP = "";
            if (Run % 2 == 0)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (i % 2 == 0)
                        sTMP += s.at(i);
                }
            }
            else
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (i % 2 != 0)
                        sTMP += s.at(i);
                }
            }
            s = sTMP;
        }
    }
    return 0;
}