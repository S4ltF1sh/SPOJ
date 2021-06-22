//P166PROG - ROUND 6G - Khóa vòng
//P205PROE - CHIẾC KHÓA
//0 1 2 3 4 5 6 7 8 9 0  1  2  3  4  5  6  7  8  9
//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long Step_Shorter(string a, string b)
{
    long long step = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int tmp1 = a.at(i) - 48, tmp2 = b.at(i) - 48;
        if (tmp2 > tmp1)
            swap(tmp1, tmp2);
        if ((tmp1 - tmp2) < (tmp2 + 10 - tmp1))
            step += (tmp1 - tmp2);
        else
            step += (tmp2 + 10 - tmp1);
    }
    return step;
}
int main()
{
    int n;
    string Now;
    string Before;
    cin >> n;
    cin.ignore();
    getline(cin, Now);
    getline(cin, Before);
    cout << Step_Shorter(Now, Before);
    return 0;
}