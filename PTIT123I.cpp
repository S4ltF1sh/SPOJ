//PTIT123I - Định lý Chebyshev (sử dụng sàng nguyên tố)
#include <iostream>
#include <vector>
using namespace std;
vector<bool> Check(1e6 + 1, true);

void isEtosthenes(vector<bool> &Check)
{
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (Check.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                Check.at(j) = false;
            }
        }
    }
}
int main()
{
    int n;
    isEtosthenes(Check);
    while (1)
    {
        int Count = 0;
        cin >> n;
        if (n == 0)
            return 0;
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (Check.at(i) == true)
                Count++;
        }
        cout << Count << endl;
    }
    return 0;
}