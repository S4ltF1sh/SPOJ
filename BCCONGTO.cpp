//BCCONGTO - Công - tơ - mét
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    while (1)
    {
        cin >> s;
        if (s == "0")
            return 0;
        long long km = 0;
        for (int i = 0; i < s.length(); i++)
        {
            long long tmp = (long long)s.at(i) - 48;
            if (tmp > 4)
                tmp--;
            km = km * 9 + tmp; //bo qua 4
        }
        cout << s << ": " << km << endl;
    }
}