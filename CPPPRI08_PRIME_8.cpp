//CPPPRI08 - PRIME 8
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void Count(int n, int p)
{
    int i, x = 0;
    for (i = 1; i <= n; i++)
    {
        int t = i;
        while (t % p == 0)
        {
            x++;
            t /= p;
        }
    }
    printf("%d\n", x);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, p;
        scanf("%d %d", &n, &p);
        Count(n, p);
    }
    return 0;
}