//P145PROC - ROUND 5C - Modulo
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> tanso(43, 0);
    vector<int> A(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> A.at(i);
        tanso.at(A.at(i) % 42)++;
    }
    int Count = 0;
    for (int i = 0; i <= 41; i++)
    {
        if (tanso.at(i) != 0)
            Count++;
    }
    cout << Count;
}