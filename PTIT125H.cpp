//PTIT125H - Chỗ ngồi
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string chair;
    cin >> chair;
    int Count = 1;
    for (int i = 0; i < n; i++)
    {
        if (chair[i] == 'S')
            Count++;
        else// ghế đôi LL nên i++
        {
            Count++;
            i++;
        }
    }
    cout << min(n, Count);

    return 0;
}