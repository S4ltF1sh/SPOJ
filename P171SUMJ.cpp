#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    long long A, B, C;
    scanf("%lld%lld%lld", &A, &B, &C);
    if (A == 0)
    {
        if (B == 0 && C != 0)
            printf("0");
        else if (B == 0 && C == 0)
            printf("-1");
        else
        {
            printf("1\n");
            printf("%.5lf", -1.0 * (double)C / (double)B);
        }
    }
    else
    {
        long long Delta = B * B - 4 * A * C;
        if (Delta < 0)
            printf("0");
        else if (Delta == 0)
        {
            printf("1\n");
            printf("%.5lf", -1.0 * (double)B / (2.0 * (double)A));
        }
        else
        {
            printf("2\n");
            double x1 = (-1.0 * (double)B - sqrt(Delta)) / (2.0 * (double)A);
            double x2 = (-1.0 * (double)B + sqrt(Delta)) / (2.0 * (double)A);
            if (x1 > x2)
                printf("%.5lf\n%.5lf", x2, x1);
            else
                printf("%.5lf\n%.5lf", x1, x2);
        }
    }
    return 0;
}