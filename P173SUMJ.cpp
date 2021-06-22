//P173SUMJ - ROUND 3J - Khung tranh của Daniel
//hình chữ nhật hay hình vuông thì cũng là hình chữ nhật nên ta quy hết về hcn làm cho dễ =))
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    int n, tmp, Count = 0;
    cin >> n;
    vector<int> Wood(105, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Wood.at(tmp)++;
    }
    for (int i = 0; i < 101; i++)
        Count += Wood.at(i) / 2;
    if (Count % 2 == 0)
        cout << Count / 2;
    else
        cout << (Count - 1) / 2;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}