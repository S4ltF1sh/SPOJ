//BCCAR - Đỗ xe tối ưu
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n;
    int Max=-1,Min=100;
    cin>>n;
    vector <int> Local(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>Local.at(i);
        if(Local.at(i)>Max)Max=Local.at(i);
        if(Local.at(i)<Min)Min=Local.at(i);
    }
    cout<<(Max-Min)*2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Run();
    }
    return 0;
}