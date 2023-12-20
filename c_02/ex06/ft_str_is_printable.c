#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	char_is_printable(char c)
{
	return (c >= 32 && c != 127);
}

int	ft_str_is_printable(char *str)
{
	int count;
		count = 0;

	while (char_is_printable(str[count]) == 1)
		++count;

	if (str[count] == '\0')
		return 1;
	else
		return 0;
}

int	main(void)
{
	char *str = "";	

	printf("%d\n", char_is_printable('\t'));
	printf("%d\n", ft_str_is_printable(str));

	return	(EXIT_SUCCESS);
}
