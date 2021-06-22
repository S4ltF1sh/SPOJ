//GOODFRIE - Good friends(chua xong)
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long n, k, A[25], B[600005], i;
    long long S = 0;
    char x[30];
    scanf("%ld%ld", &n, &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", x);
        B[i] = strlen(x);
    }
    for (i = n + k; i > n; i–)
        B[i] = 0; //Bổ sung thêm để khỏi phải kiểm tra tràn mảng
    for (i = 2; i <= 20; i++)
        A[i] = 0; //Khởi gán mảng đếm
    for (i = k < n ? k : n; i >= 1; i–)
        A[B[i]]++; //Đếm từ B1 đến B[k]
    for (i = 1; i <= n; i++)
    {
        A[B[i + k]]++;
        S +=–A[B[i]];
    }
    printf("%lld", S);
}
