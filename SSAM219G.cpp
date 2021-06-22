//SSAM219G - HÌNH CHỮ NHẬT LỚN NHẤT(RTE)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
long long Area(vector<long long> Data, int n, int Local)
{
    long long S = Data.at(Local);
    for (int i = Local + 1; i < n; i++)
    {
        if (Data.at(i) >= Data.at(Local))
            S += Data.at(Local);
        else
            break;
    }
    for (int i = Local - 1; i >= 0; i--)
    {
        if (Data.at(i) >= Data.at(Local))
            S += Data.at(Local);
        else
            break;
    }
    return S;
}
void Run()
{
    long long Max = 0;
    int n;
    cin >> n;
    vector<long long> Data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Data.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        long long Check = Area(Data, n, i);
        if (Check > Max)
            Max = Check;
    }
    cout << Max << endl;
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