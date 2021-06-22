//SSAM019F - SỐ FIBONACCI
#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for (int r = 1; r <= t; r++)
	{
		int n;
		long long f1 = 1, f2 = 0, Fibonacci = 0;
		scanf("%d", &n);
		if (n == 1)
		{
			printf("1");
		}
		else
		{
			for (int i = 2; i <= n; i++)
			{
				Fibonacci = f1 + f2;
				if (i == n)
				{
					printf("%lld\n", Fibonacci);
					continue;
				}
				f2 = f1;
				f1 = Fibonacci;
			}
		}
	}
	return 0;
}