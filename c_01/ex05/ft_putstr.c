#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, sizeof c);
}

int str_size_mesure(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

void ft_putstr(char *str)
{
	write(1, str, str_size_mesure(str));
}

int	main(void)
{
	char chaine[] = "Chat";	

	ft_putstr(chaine);

	ft_putchar('\n');

	return	0;
}
