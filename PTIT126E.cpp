//PTIT126E - Bỏ phiếu
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    while (1)
    {
        string s;
        vector<int> tanso(300);
        getline(cin, s);
        if (s == "#")
            break;
        int Check=1;
        for (int i = 0; i < s.size(); i++)
        {
            tanso.at(s.at(i))++;
            if (tanso.at('A') >= (s.size() / 2) && s.size() % 2 == 0)
            {
                cout << "need quorum\n";
                Check=0;
                break;
            }
            else if (tanso.at('A') > (s.size() / 2) && s.size() % 2 == 1)
            {
                cout << "need quorum\n";
                Check=0;
                break;
            }
        }
        if(Check==0)continue;
        if(tanso.at('Y')>tanso.at('N'))cout<<"yes\n";
        else if(tanso.at('Y')<tanso.at('N'))cout<<"no\n";
        else cout<<"tie\n";
    }
    return 0;
}