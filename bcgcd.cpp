#include <stdio.h>
long long UCLN(long long a, long long b)
{
	if (a == 0 || b == 0)
	{
		return (a + b);
	}
	return UCLN(b, a % b);
}
long long BCNN(long long a, long long b)
{
	return (a * b) / UCLN(a, b);
}
int main()
{
    while(1)
    {
        long long a, b;
		scanf("%lld%lld", &a, &b);
        if(a==0&&b==0)return 0;
		printf("%lld %lld\n", UCLN(a, b), BCNN(a, b));
    }
	return 0;
}