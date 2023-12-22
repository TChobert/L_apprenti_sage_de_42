#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');

		nb = nb * -1;
	}
	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}

	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putnbr(14444);
	ft_putchar('\n');

	return	(EXIT_SUCCESS);	
}
