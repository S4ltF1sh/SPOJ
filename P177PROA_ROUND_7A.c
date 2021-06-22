//P177PROA - ROUND 7A - Một cái đinh rỉ !
#include <stdio.h>
#include <math.h>
int main()
{
	long long xi, yi, xw, yw, r, Count = 0;
	scanf("%lld %lld %lld %lld %lld",&r, &xi, &yi, &xw, &yw );
	if (xi == xw && yi == yw)
	{
		printf("0");
	}
	else
	{
		float d = sqrt((xw - xi) * (xw - xi) + (yw - yi) * (yw - yi));
		while (d / 2 > r)
		{
			d -= (r * 2);
			Count++;
		}
		printf("%lld", Count + 1);
	}
	return 0;
} 