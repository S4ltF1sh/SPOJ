//P153SUMI - ROUND 3I - Sắp xếp
/*
Chỉ có 2 trường hợp thỏa mãn đó là: 
- Chỉ có hai dãy không giảm và phần tử đầu của dãy 1 >= phần tử cuối dãy 2. 
- Chỉ có 1 dãy không giảm.
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[100005];
    int Count = 0;
    int Local = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i > 1 && arr[i] < arr[i - 1])
        {
            Count++;
            //Local la vi tri bat dau cua day khong giam 2
            Local = i;
        }
    }
    if (Count > 1)
        cout << "-1";
    else if (Count == 0)
        cout << "0";
    else if (Count == 1)
    {
        if (arr[1] >= arr[n])
        {
            cout << (n - Local + 1);
        }
        else
            cout << "-1";
    }
    return 0;
}