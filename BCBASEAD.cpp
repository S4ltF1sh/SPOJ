//BCBASEAD - Phép cộng cơ sở
//Test of SPOJ ptit:Sum<=15
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<string> Change(17);
void Enter_Change()
{
    Change.at(0) = "{}";
    Change.at(1) = "{{}}";
    for (int i = 2; i <= 15; i++)
    {
        Change.at(i) += "{";
        for (int j = 0; j < i; j++)
        {
            Change.at(i) += (Change.at(j) + ",");
        }
        Change.at(i).pop_back(); //xoa di dau "," thua
        Change.at(i) += "}";
    }
}
void Run()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    int s_1, s_2;
    for (int i = 0; i < 16; i++)
    {
        if (s1 == Change.at(i))
            s_1 = i;
        if (s2 == Change.at(i))
            s_2 = i;
    }
    cout << Change.at(s_1 + s_2) << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    Enter_Change();
    while (t--)
    {
        Run();
    }
    return 0;
}