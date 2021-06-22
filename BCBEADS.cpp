#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n;
    cin>>n;
    vector <int> Arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin>>Arr.at(i);
    }
    int Count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(Arr.at(i)!=Arr.at(i+1))Count++;
    }
    cout<<Count;
}
int main()
{
    Run();
    return 0;
}