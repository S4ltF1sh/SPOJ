//P196PROC - Problem C - Kéo Búa Giấy
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
    int n;
    string s1, s2, p;
    cin >> n;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if (s1.at(i) == 'K' && s2.at(i) == 'K')
            p.push_back('B');
        else if (s1.at(i) == 'B' && s2.at(i) == 'B')
            p.push_back('G');
        else if (s1.at(i) == 'G' && s2.at(i) == 'G')
            p.push_back('K');
        else if (s1.at(i) == 'K' && s2.at(i) == 'B' || s1.at(i) == 'B' && s2.at(i) == 'K')
            p.push_back('B');
        else if (s1.at(i) == 'K' && s2.at(i) == 'G' || s1.at(i) == 'G' && s2.at(i) == 'K')
            p.push_back('K');
        else if (s1.at(i) == 'B' && s2.at(i) == 'G' || s1.at(i) == 'G' && s2.at(i) == 'B')
            p.push_back('G');
    }
    cout << p;
}