//P135SUME - SUM5 E - Bản nhạc
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> Music(9);
    int upCheck = 1;
    int doCheck = 1;
    cin >> Music.at(0);
    for (int i = 1; i < 8; i++)
    {
        cin >> Music.at(i);
        if (Music.at(i) > Music.at(i - 1))
            upCheck = 0;
        if (Music.at(i) < Music.at(i - 1))
            doCheck = 0;
    }
    if (upCheck == 1 && doCheck == 0)
        cout << "descending";
    else if (upCheck == 0 && doCheck == 1)
        cout << "ascending";
    else
        cout << "mixed";
    return 0;
}