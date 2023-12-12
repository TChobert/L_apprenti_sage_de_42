#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = *a / *b;
	*b = c % d;
	
}

int main (void)
{
	int a = 42;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);

	printf("a = %d et b = %d\n", a, b);

	return 0;
}
