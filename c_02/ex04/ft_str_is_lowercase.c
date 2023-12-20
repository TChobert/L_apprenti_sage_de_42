#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	character_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int count;
		count = 0;

	while (character_is_lowercase(str[count]) == 1)
		++count;

	if (str[count] == '\0')
		return (1);	
	else
		return (0);
}

int	main(void)
{
	char *str = "";
	
	printf("%d\n", character_is_lowercase('a'));
	printf("%d\n", ft_str_is_lowercase(str));

	return (EXIT_SUCCESS);
}
