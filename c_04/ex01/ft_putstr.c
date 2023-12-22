#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;
				count = 0; 

	while (str[count] != '\0')
	{
		count++;
	}
	return count;
}

void	ft_putstr(char *str)
{
	unsigned int	count;
				count = 0;

	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		
		count++;
	}
}

void	ft_putstrv2(char *str)
{
		write(1, str, ft_strlen(str));
}

int	main(void)
{
	char str[] = "Wow";

	
	ft_putstrv2(str);
	ft_putchar('\n');

	return	(EXIT_SUCCESS);
}
