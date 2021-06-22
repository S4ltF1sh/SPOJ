//PTIT121H - Tráo bài
//https://youtu.be/97ntDzSeYAs?list=PLXfp-C4EuTOO9fZzA6SC8__5FVNx9x6_4
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int m, k, Local = 0;
    cin >> m >> k >> s;
    vector<int> A;
    for (int i = 0; i < m; i++)
        A.push_back(i);
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s.at(i) == 'A')
            Local = (Local + 1) % m;
        if (s.at(i) == 'B')
        {
            swap(A.at(Local), A.at((Local + 1) % m));
            Local = (Local + 1) % m;
        }
    }
    cout << A.at((Local + k - 1) % m) << " " << A.at((Local + k) % m) << " " << A.at((Local + k + 1) % m);
    return 0;
}