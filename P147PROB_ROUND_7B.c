//P147PROB - ROUND 7B - Pha nước cam
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double Orange[n];
    double Sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &Orange[i]);
        Sum += Orange[i];
    }
    printf("%.12f", Sum / n);
    return 0;
}