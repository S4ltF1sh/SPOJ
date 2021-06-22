#include <stdio.h>
long long a[1005][1005] = {0};
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    long long Dien_Tich = (long long)m * (long long)n;
    for (int i = 0; i < m + 2; i++)
    {
        for (int j = 0; j < n + 2; j++)
        {
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1)
            {
                a[i][j] = 0;
            }
            else
            {
                scanf("%lld", &a[i][j]);
                if (a[i][j] == 0)
                {
                    Dien_Tich--;
                }
            }
        }
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (a[i][j] > a[i - 1][j])
            {
                Dien_Tich += (a[i][j] - a[i - 1][j]);
            }
            if (a[i][j] > a[i + 1][j])
            {
                Dien_Tich += (a[i][j] - a[i + 1][j]);
            }
            if (a[i][j] > a[i][j - 1])
            {
                Dien_Tich += (a[i][j] - a[i][j - 1]);
            }
            if (a[i][j] > a[i][j + 1])
            {
                Dien_Tich += (a[i][j] - a[i][j + 1]);
            }
        }
    }
    printf("%lld\n", Dien_Tich);
    return 0;
}