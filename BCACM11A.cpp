//BCACM11A - Phương án khuyến mãi
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isSTN(int n)
{
    int Check = n;
    int Reseve = 0;
    while (n > 0)
    {
        Reseve = Reseve * 10 + n % 10;
        n /= 10;
    }
    if (Reseve == Check)
        return true;
    return false;
}
bool isSum_Div_10(int n)
{
    int Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    if (Sum % 10 == 0)
        return true;
    return false;
}
bool dont_Have_0(int n)
{
    while (n > 0)
    {
        if (n % 10 == 0)
            return false;
        n /= 10;
    }
    return true;
}
void Run()
{
    int Count1 = 0;
    int Count2 = 0;
    int Count3 = 0;
    for (int i = 100000; i <= 999999; i++)
    {
        if (isSTN(i) == true)
            Count3++;
        if (isSTN(i) == true && isSum_Div_10(i) == true)
            Count2++;
        if (isSTN(i) == true && isSum_Div_10(i) == true && dont_Have_0(i) == true)
            Count1++;
    }
    int n,m,k;
    cin>>n>>m>>k;
    if(n<=Count1&&m<=(Count2-n)&&k<=(Count3-n-m))cout<<"YES\n";
    else cout<<"NO\n";
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