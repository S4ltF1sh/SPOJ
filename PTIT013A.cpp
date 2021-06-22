//PTIT013A - Bài A - Số may mắn
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    long long n;
    long long Check = 0;
    cin >> n;
    Check += n % 100;
    if (Check == 86)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}