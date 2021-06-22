#include <iostream>
#include <vector>
using namespace std;
void isEtosthenes(vector<bool> &Check, int k, int n)
{
    int Count = 0;
    bool Check_Condition = false;
    for (int i = 2; i <= n; i++)
    {
        if (Check.at(i) == true)
        {
            Count++;
            if (Count == k)
            {
                cout << i;
                break;
            }
            for (long long j = (long long)i * i; j <= n; j += i)
            {
                if(Check.at(j)==true)
                {
                    Check.at(j) = false;
                    Count++;
                }
                if (Count == k)
                {
                    cout << j;
                    Check_Condition = true;
                    break;
                }
            }
        }
        if (Check_Condition == true)
            break;
    }
}
void Run()
{
    int n, k;
    cin >> n >> k;
    vector<bool> Check(n + 1, true);
    isEtosthenes(Check, k, n);
}
int main()
{
    Run();
    return 0;
}