#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int valeur_a = *a;

	*a = *b;
	*b = valeur_a;
}

int main(void)
{
	int a = 19;
	int b = 22;

	int *pointeur1 = &a;
	int *pointeur2 = &b;

	ft_swap(pointeur1, pointeur2);

	printf("a = %d, et b = %d\n", a, b);

	return 0;
}
