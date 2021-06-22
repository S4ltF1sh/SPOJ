//P131SUMH - SUM1 H - KANGUROO
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int Space1 = c - b;
    int Space2 = b - a;
    if (Space1 > Space2)
        cout << Space1 - 1;
    else
        cout << Space2 - 1;
    return 0;
}