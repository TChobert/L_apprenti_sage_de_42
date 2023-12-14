#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int valeur_de_a = *a;

	*a = *b;
	*b = valeur_de_a;
}

void ft_rev_int_tab(int *tab, int size)
{
	int d = 0;
	int f = size -1;

	while (d < size && f > 0)
	{
		while (d >= f && f <= d)
		{
			ft_swap(&tab[d], &tab[f]);
			++d;
			--f;
		}
		++d;
		--f;
	}
}

int main(void)
{
	int tableau[] = {1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(tableau, 6);

	int taille = sizeof(tableau) / sizeof(tableau[0]);

	printf("Contenu du tableau : ");

	for (int i = 0; i < taille; ++i)
	{
		printf("%d", tableau[i]);
	}

	printf("\n");

	return 0;
}
