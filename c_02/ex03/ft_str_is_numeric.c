#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	character_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int count;
		count = 0;

	while (character_is_numeric(str[count]) == 1)
		++ count;

	if (str[count] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char *str = "";

	printf("%d\n", ft_str_is_numeric(str));

	return (EXIT_SUCCESS);
}
