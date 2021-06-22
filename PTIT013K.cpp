//PTIT013K - BÀI K - SỐ NGUYÊN HỆ CƠ SỐ ACM
#include <iostream>
#include <vector>
#include <string>
using namespace std;
long long Giai_Thua(long long n)
{
    if (n == 1)
        return 1;
    return n * Giai_Thua(n - 1);
}
void Run()
{
    string ACM;
    getline(cin, ACM);
    long long Tenth = 0;
    int Run = 0;
    for (int i = ACM.length() - 1; i >= 0; i--)
    {
        Run++;
        Tenth += ((int)ACM.at(i) - 48) * Giai_Thua(Run);
    }
    cout << Tenth << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
    return 0;
}