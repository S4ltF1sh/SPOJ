//P187PROD - ROUND 7D - VÒNG TRÒN

#include <stdio.h>
#include <string.h>
int a[127] = {0}, b[127] = {0}, Check[127] = {0};
int main()
{
    int Cnt = 0;
    char s[54];
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (Check[s[i]] == 0)
        {
            a[s[i]] = i;
            Check[s[i]] = 1;
        }
        else
            b[s[i]] = i;
    }
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 'A'; j <= 'Z'; j++)
            if (a[i] < a[j] && a[j] < b[i] && b[j] > b[i])
                Cnt++;
    }
    printf("%d", Cnt);
    return 0;
}