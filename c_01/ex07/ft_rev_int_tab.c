#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	const int valeur_de_a = *a;

	*a = *b;
	*b = valeur_de_a;
}

void ft_rev_int_tab(int *tab, int size)
{
	int * const first_elem = tab;
	int * const last_elem = tab + size - 1;
	const int	mid_array = size / 2;
	int 		count = 0;
	
	while (count < mid_array)
	{
		ft_swap(first_elem + count, last_elem - count);
		++count;
	}
}

void display_array(int *ints, size_t size)
{
	for (size_t i = 0; i < size; ++i)
		printf("%d ", ints[i]);
	printf("\n");
}

int main(void)
{
	int tableau[] = {1, 2, 3, 4, 5, 6};
	const size_t size = sizeof(tableau) / sizeof(tableau[0]);

	display_array(tableau, size);

	ft_rev_int_tab(tableau, (int)size);

	display_array(tableau, size);

	return 0;
}
