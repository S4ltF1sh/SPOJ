//P166SUMI - ROUND 6I - Rick Flag
#include <iostream>
#include <vector>
using namespace std;
bool Enter_Arr(vector<int> &Arr, int n)
{
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr.at(i);
        if (Arr.at(i) == 0)
            Count++;
        if (Count > 1)
            return false;
    }
    if (Count == 1)
        return true;
    return false;
}
void Run()
{
    int n;
    cin >> n;
    vector<int> Arr(n + 1);
    if (Enter_Arr(Arr, n) == true)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    Run();
    return 0;
}