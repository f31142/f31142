#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	int n;
	int m;
	int ex;
	scanf("%d %d", &n, &m);
	printf("%d\n", gcd(n, m));

	ex = (n / gcd(n, m)) * (m / gcd(n, m)) * gcd(n, m);

	printf("%d", ex);
	

	return 0;
}

int gcd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
		if (b == 0)
			return a;
	}
}