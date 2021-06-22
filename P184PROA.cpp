//P184PROA - ROUND 4A - Xếp hàng mua vé
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n, a, b, Count = 0;
    cin >> n >> a >> b;
    for (int i = 0; i <= b; i++)
        if (n - i - 1 >= a)
            Count++; //tru 1 vi tri cua Jackichul
    cout << Count;
}