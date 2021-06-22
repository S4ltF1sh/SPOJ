//P147PROI - ROUND 7I - Giới hạn
//P161SUMB - ROUND 1B - Giải tích
#include <iostream>
#include <vector>
using namespace std;

int ucln(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    return ucln(b, a % b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> P;
    vector<int> Q;
    int tmp;
    for (int i = 0; i <= n; i++)
    {
        cin >> tmp;
        P.push_back(tmp);
    }
    for (int i = 0; i <= m; i++)
    {
        cin >> tmp;
        Q.push_back(tmp);
    }
    if (n > m)
    {
        if (P.at(0) * Q.at(0) > 0)
            cout << "Infinity";
        else
            cout << "-Infinity";
    }
    else if (n < m)
    {
        cout << "0/1";
    }
    else
    {
        int UCLN = ucln(P.at(0), Q.at(0));
        if ((Q.at(0) < 0 && UCLN > 0) || (Q.at(0) > 0 && UCLN < 0))
        {
            UCLN = -UCLN;
            cout << (P.at(0) / UCLN) << "/" << (Q.at(0) / UCLN);
        }
        else
        {
            cout << (P.at(0) / UCLN) << "/" << (Q.at(0) / UCLN);
        }
    }
    return 0;
}