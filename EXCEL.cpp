//EXCEL - Bảng tính Excel
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (1)
    {
        char r, c;
        long long a, b;
        string s = "";
        cin >> r >> a >> c >> b;
        if (a == b && b == 0)
            return 0;
        while (b > 0)
        {
            b--;
            s = (char)('A' + b % 26) + s;
            b /= 26;
        }
        cout << s << a << endl;
    }
}