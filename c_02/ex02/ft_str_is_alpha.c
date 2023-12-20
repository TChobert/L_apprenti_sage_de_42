#include <stdio.h>
#include <stdlib.h>

int character_is_alpha(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	int count;
	count = 0;

	while (character_is_alpha(str[count]) == 1)
	{
		++count;
	}

	if (str[count] == '\0')
		return (1);

	else
		return (0);
}

int	main(void)
{
	char *str = "";

	printf("%d\n", ft_str_is_alpha(str));

	return	(EXIT_SUCCESS);
}
