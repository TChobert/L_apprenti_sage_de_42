#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	size_t count;
	count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		++count;
	}
	dest[count] = '\0';
	
	return dest;
}

int	main(void)
{
	char str[] = "Cacatoes";
	char str2[] = "";

	ft_strcpy(str2, str);

	printf("%s\n", str2);

	return (EXIT_SUCCESS);
}
