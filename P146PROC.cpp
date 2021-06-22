//P146PROC - ROUND 6C - Bút màu
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long a;
    vector <long long> Arr;
    for (int i = 0; i < 4; i++)
    {
        cin>>a;
        Arr.push_back(a);
    }
    sort(Arr.begin(),Arr.end());
    int Check=1;
    for (int i = 1; i < Arr.size(); i++)
    {
        if(Arr.at(i)!=Arr.at(i-1))Check++;
    }
    if(Check==1)cout<<3;
    else if(Check==2)cout<<2;
    else if(Check==3)cout<<1;
    else cout<<0;
    return 0;
}