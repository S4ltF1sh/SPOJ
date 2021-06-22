//P182PROH - ROUND 2H - 24 Giờ
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string Hour = "", Minutes = "", Secons = "", Check = "";
    for (int i = 0; i <= 1; i++)
        Hour += s[i];
    for (int i = 3; i <= 4; i++)
        Minutes += s[i];
    for (int i = 6; i <= 7; i++)
        Secons += s[i];
    for (int i = 8; i <= 9; i++)
        Check += s[i];
    if (Check == "AM")
    {
        if (Hour == "12")
            Hour = "00";
        cout << Hour << ":" << Minutes << ":" << Secons;
    }
    else
    {
        if (Hour == "01")
            Hour = "13";
        else if (Hour == "02")
            Hour = "14";
        else if (Hour == "03")
            Hour = "15";
        else if (Hour == "04")
            Hour = "16";
        else if (Hour == "05")
            Hour = "17";
        else if (Hour == "06")
            Hour = "18";
        else if (Hour == "07")
            Hour = "19";
        else if (Hour == "08")
            Hour = "20";
        else if (Hour == "09")
            Hour = "21";
        else if (Hour == "10")
            Hour = "22";
        else if (Hour == "11")
            Hour = "23";
        cout << Hour << ":" << Minutes << ":" << Secons;
    }
    return 0;
}