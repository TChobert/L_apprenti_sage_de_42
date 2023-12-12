#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a = 21;

	int *pointeur;

	pointeur = &a;

	ft_ft(pointeur);
	
	printf("%d\n", a);

	return 0;
}
