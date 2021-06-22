//P132SUMD SUM2 D Thực hiện phép tính
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b + c)
        printf("%d=%d+%d", a, b, c);
    else if (a == b - c)
        printf("%d=%d-%d", a, b, c);
    else if (a == b * c)
        printf("%d=%d*%d", a, b, c);
    else if ((c != 0) && (a == b / c))
        printf("%d=%d/%d", a, b, c);
    else if (a + b == c)
        printf("%d+%d=%d", a, b, c);
    else if (a - b == c)
        printf("%d-%d=%d", a, b, c);
    else if (a * b == c)
        printf("%d*%d=%d", a, b, c);
    else if ((b != 0) && (a / b == c))
        printf("%d//%d=%d", a, b, c);
    return 0;
}