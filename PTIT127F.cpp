//PTIT127F - Xếp sách
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long Books[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> Books[i];
    }
    long long BOOK = n;
    long long Count = 0;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (Books[i] == BOOK)
            BOOK--;
        else
            Count++;
    }
    cout << Count;
}