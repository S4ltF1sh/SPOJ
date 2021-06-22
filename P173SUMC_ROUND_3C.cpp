//P173SUMC - ROUND 3C - Hệ phương trình
//1 <= n,m <= 1000 n,m nho nen for trau thoi =)))))))))
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n, m, Count = 0;
    cin >> n >> m;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (i * i + j == n && i + j * j == m)
                Count++;
        }
    }
    cout << Count;
}