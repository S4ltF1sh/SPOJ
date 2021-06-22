//PTIT017F - ACM PTIT 2017 F - CHIA HẾT CHO 36
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(string &x, string &y)
{
    while (x.length() > y.length())
        y = "0" + y;
    while (x.length() < y.length())
        x = "0" + x;
    if (x < y)
        return true;
    return false;
}
void Run(int n, int stt)
{
    vector<string> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h.at(i);
    }
    sort(h.begin(), h.end(), cmp);
    string Min = h.at(0);
    string Max = h.at(n - 1);
    while (Min.at(0) == '0')
        Min.erase(Min.begin());
    while (Max.at(0) == '0')
        Max.erase(Max.begin());
    if (Min == Max)
        cout << "Case " << stt << ": "
             << "There is a row of trees having equal height.\n";
    else
        cout << "Case " << stt << ": " << Min << " " << Max << endl;
}
int main()
{
    int n, stt = 0;

    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        stt++;
        Run(n, stt);
    }
}