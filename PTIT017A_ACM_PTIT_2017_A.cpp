//PTIT017A - ACM PTIT 2017 A - ƯỚC SỐ NGUYÊN TỐ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
#define NMAX 10000000
int c[NMAX + 10] = {};
void Count_Uoc()
{
    for (int i = 2; i <= NMAX; i++)
    {
        if (c[i] == 0)
            for (int j = i; j <= NMAX; j += i)
            {
                c[j]++;
            }
    }
}

int main()
{
    Count_Uoc();
    int stt = 0;
    int t;
    cin >> t;
    while (t--)
    {
        stt++;
        int a, b, k;
        cin >> a >> b >> k;
        int Count = 0;
        for (int i = a; i <= b; i++)
        {
            if (c[i] == k)
                Count++;
        }
        cout << "Case #" << stt << ": " << Count << endl;
    }
}