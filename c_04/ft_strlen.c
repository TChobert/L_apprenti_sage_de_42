#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;
		count = 0;

	while (str[count] != '\0')
	{
		++count;
	}
	return count;	
}

int	main(void)
{
	char	str[] = "Oiseau";

	printf("%d\n", ft_strlen(str));

	return	(EXIT_SUCCESS);
}
