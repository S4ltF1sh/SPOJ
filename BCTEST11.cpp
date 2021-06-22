//BCTEST11 - Số chia may mắn
#include <iostream>
#include <cmath>
using namespace std;
bool isLuck(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}
bool isDiv_Luck(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isLuck(i) == true)
                return true;
        }
    }
    return false;
}
void Run()
{
    int n;
    cin>>n;
    if(isDiv_Luck(n)==true)cout<<"YES";
    else cout<<"NO";
}
int main()
{
    Run();
    return 0;
}