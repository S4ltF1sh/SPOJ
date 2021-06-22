//P173PROG - ROUND 3G - Biến đổi xâu kí tự
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    string Result;
    getline(cin, Result);
    if (next_permutation(Result.begin(), Result.begin() + Result.size()))
    {
        cout << Result << endl;
    }
    else
        cout
            << "BIGGEST\n";
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
    return 0;
}