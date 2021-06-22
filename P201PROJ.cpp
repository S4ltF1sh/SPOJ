//P201PROJ - Just a math
//a*b + a + b = ab = a * length(b) + b
//=> b = length(b) - 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long A;
        string B;
        cin >> A >> B;
        cout << A * (B.length() - 1) << endl;
    }
}