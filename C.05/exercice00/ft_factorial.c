#include <stdio.h>
#include <stdlib.h>

#define INVALID_VALUE 0

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return INVALID_VALUE;
	if (nb <= 1)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
}

int ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		return INVALID_VALUE;
	while (nb > 1)
	{
		factorial *= nb;
		--nb;
	}
	return factorial;
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("Interactive: %d\n", ft_iterative_factorial(atoi(av[1])));
		printf("Recursive: %d\n", ft_iterative_factorial(atoi(av[1])));
	}
	return EXIT_SUCCESS;
}
