//P151PROA - ROUND 1A - Các cặp giai thừa
//x khong duoc chua 0,1
//2!=2!
//3!=3!
//4!=3!*2!*2!
//5!=5!
//6!=5!*3!
//7!=7!
//8!=7!*2!*2!*2!
//9!=7!*3!*3!*2!
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(char x, char y) { return x > y; }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        string tmp = "";
        for (int i = 0; i < a.length(); i++)
        {
            if (a.at(i) == '2')
                tmp.push_back('2');
            else if (a.at(i) == '3')
                tmp.push_back('3');
            else if (a.at(i) == '4')
                tmp += "322";
            else if (a.at(i) == '5')
                tmp.push_back('5');
            else if (a.at(i) == '6')
                tmp += "53";
            else if (a.at(i) == '7')
                tmp.push_back('7');
            else if (a.at(i) == '8')
                tmp += "7222";
            else if (a.at(i) == '9')
                tmp += "7332";
        }
        sort(tmp.begin(), tmp.end(), cmp);
        cout << tmp << endl;
    }
}