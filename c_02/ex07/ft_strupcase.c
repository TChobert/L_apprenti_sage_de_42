#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	count;
		count = 0;

	while (str[count] != '\0')
	{
		if (char_is_lowercase(str[count]) == 1)
			{
				str[count] = str[count] - 32;
			}
		++count;
	}

	return (str);
}

int	main(void)
{
	char str[] = "abc29";

	printf("%s", ft_strupcase(str));

	return	(EXIT_SUCCESS);
}
