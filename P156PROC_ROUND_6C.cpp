//P156PROC - ROUND 6C - Hoán vị xâu kí tự(chua xong)
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    string Result;
    int k;
    while (1)
    {
        cin >> Result >> k;
        if (Result == "#" && k == 0)
            break;
        int Count = 1;
        while (1)
        {
            if (next_permutation(Result.begin(), Result.begin() + Result.size()))
            {
                Count++;
                if (Count == k)
                {
                    cout << Result << endl;
                    break;
                }
            }
        }
    }
}
int main()
{
    Run();
    return 0;
}