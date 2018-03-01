#include <stdio.h>

int power (int base, int n)
{
	int i, p;

	p=1;
	for (i = 1; i <= n; ++i)
		p= p * base;
		printf("p %d", p);
	return p;
}

main(void)
{
	printf("return %d", power(2,9));
	return 0;
}