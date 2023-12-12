#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int a = 21;

	int *pointeur = &a;
	int **pointeur2 = &pointeur;
	int ***pointeur3 = &pointeur2;
	int ****pointeur4 = &pointeur3;
	int *****pointeur5 = &pointeur4;
	int ******pointeur6 = &pointeur5;
	int *******pointeur7 = &pointeur6;
	int ********pointeur8 = &pointeur7;
	int *********pointeur9 = &pointeur8;

	ft_ultimate_ft(pointeur9);

	printf("%d\n", a);

	return 0;
}
