//PTIT135J - Tính lãi suất
#include <iostream>
using namespace std;
void Run()
{
    double n,l,m;
    cin>>n>>l>>m;
    double Money=n;
    int Count=0;
    while (1)
    {
        Money+=Money*(l/100);
        Count++;
        if(Money>=m)
        {
            cout<<Count<<endl;
            break;
        }
    }
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