//PTIT136A - Cảnh báo
//map
//https://www.stdio.vn/modern-cpp/stl-map-trong-c-v12lmL
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
//key:string,value:long long
map<string, long long> Turn_eat;
int main()
{
    int n, Count = 0;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        Turn_eat[s]++;
        if (i - Turn_eat[s] < Turn_eat[s] - 1)
            Count++;
    }
    cout << Count;
}