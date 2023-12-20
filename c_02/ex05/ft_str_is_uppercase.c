#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool	char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int count;
		count = 0;

	while (char_is_uppercase(str[count]) == 1)
		++count;

	if (str[count] == '\0')
		return 1;
	else
		return 0;
}

int	main(void)
{
	char *str = "";

	printf("%d\n", char_is_uppercase('A'));
	printf("%d\n", ft_str_is_uppercase(str));

	return (EXIT_SUCCESS);
}
