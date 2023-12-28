#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int	signs(char c)
{
	return (c == '+') || (c == '-');
}

int	posit_or_negat(char *str)
{
	unsigned int	count;
	unsigned int	nb;

	count = 0;
	nb = 0;

	while (str[count] != '\0')
	{
		if (str[count] == '-')
		{
			++nb;
		}
		++count;
	}
	return (nb);
}

bool	posit_or_negat2(char *str)
{
	return (posit_or_negat(str) % 2 == 0);
}

int	char_to_int(char *str)
{
	unsigned int	count;
	unsigned int	nb_converti;

	count = 0;
	nb_converti = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		nb_converti = nb_converti * 10 + (str[count] - '0');
		++count;
	}
	return nb_converti;
}

bool	char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

bool	char_is_white(char c)
{
	return (c >= 9 && c <= 13) || (c == 32);
}

bool	char_is_alphabetic(char c)
{
	return char_is_white(c) || char_is_numeric(c);
}

int	ft_atoi(char *str)
{
	signed int	count;
	int	nb_converti;

	count = 0;
	nb_converti = 0;
	while (signs(str[count]) == 1 || char_is_white(str[count]) == 1)
		++count;
 
	while (str[count] != '\0')
	{
		while (char_is_numeric(str[count]) == 1)
		{		
			nb_converti = nb_converti * 10 + (str[count] - '0');
	
			++count;
		}
		++count;
		
		if	(char_is_numeric(str[count]) == 0)
			break;
	}

	if (posit_or_negat2(str) == 0)
		nb_converti = -1 * nb_converti;

	return nb_converti;
}

int	main(void)
{
	char	str[] = "\t\t\t++--3223abc32332ie";
	char	str2[] = "3242";
	char	c = '9';
	printf("%d\n", posit_or_negat(str));
	printf("%d\n", posit_or_negat2(str));
	printf("%d\n", char_to_int(str2));
	printf("%d\n", char_is_white('\t'));
	printf("%d\n", char_is_numeric(c));

	printf("atoi = %d\n", ft_atoi(str));
	return (EXIT_SUCCESS);
}
