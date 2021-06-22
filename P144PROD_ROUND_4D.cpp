//P144PROD - ROUND 4D - Hàng cây(chua nghi ra)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Run(int n)
{
    vector<string> Hi(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,Hi.at(i));
    }
}
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        cin.ignore();
        Run(n);
    }
    return 0;
}