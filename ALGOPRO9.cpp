//ALGOPRO9 - Số kì dị(sigbrt)
//Số kì dị được định nghĩa là số
//có tích các ước số của nó chia cho bội chung nhỏ nhất của các ước bằng 1.
//=> snt cmnr :))
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<bool> Check(1e6 + 1, true);

void isEtosthenes(vector<bool> &Check)
{
    Check.at(0) = Check.at(1) = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (Check.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                Check.at(j) = false;
            }
        }
    }
}
void Run()
{
    string l;
    string r;
    cin >> l;
    cin >> r;
    if (l.at(l.length() - 1) == '.')
        l.pop_back();
    if (r.at(r.length() - 1) == '.')
        r.pop_back();
    int R = stoi(r);
    int L = stoi(l);
    int Count = 0;
    for (int i = L; i <= R; i++)
        if (Check.at(i) == true)
            Count++;
    cout << Count << endl;
}
int main()
{
    int t;
    cin >> t;
    isEtosthenes(Check);
    while (t--)
    {
        Run();
    }
}