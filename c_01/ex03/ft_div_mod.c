#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;

	*mod = a % b;
}

int main(void)
{
	int a = 45;
	int b = 10;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("div = %d, mod = %d\n", div, mod);

	return 0;
}
