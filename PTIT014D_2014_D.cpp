//PTIT014D - 2014 Bài D - Số may mắn
//sau khi nén mà bằng 9 thì là may mắn.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long Winrar(string Check)
{
    long long Sum = 0;
    for (int i = 0; i < Check.length(); i++)
    {
        Sum += (int)Check.at(i) - 48;
    }
    return Sum;
}
int Winrar1(long long n)
{
    int Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    if (Sum < 10)
        return Sum;
    return Winrar1(Sum);
}
void Run()
{
    string s;
    getline(cin, s);
    if (Winrar1(Winrar(s)) == 9)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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