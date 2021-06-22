//BCINCSEQ - Đoạn tăng
#include <iostream>
#include <vector>
using namespace std;
void Enter_Arr(vector<long long> &Arr, int n)
{
    int Max = 1;
    int Run = 1;
    cin >> Arr.at(0);
    for (int i = 1; i < n; i++)
    {
        cin >> Arr.at(i);
        if (Arr.at(i) < Arr.at(i - 1))
        {
            if (Max < Run)
                Max = Run;
            Run = 1;
        }
        else
        {
            Run++;
        }
    }
    if (Max < Run)
        Max = Run;
    cout << Max;
}
void Run()
{
    int n;
    cin >> n;
    vector<long long> Arr(n + 5);
    Enter_Arr(Arr, n);
}
int main()
{
    Run();
    return 0;
}