//P193PROD - Problem D - Chia quả dưa hấu
//chan + chan = chan, le + le = chan, le + chan = chan, 1 + 1 = 2.
#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w > 2 && w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}