//P163PROD - ROUND 3D - Nếu cuộc sống không có số 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string Delete_Zero(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.erase(i, 1);
    }
    return s;
}
int main()
{
    long long x, y;
    cin >> x >> y;
    long long Sum = x + y;
    string X = to_string(x);
    string Y = to_string(y);
    string sUM = to_string(Sum);
    if (stoi(Delete_Zero(X)) + stoi(Delete_Zero(Y)) == stoi(Delete_Zero(sUM)))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}