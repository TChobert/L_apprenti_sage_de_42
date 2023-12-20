#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	count = 0;

	while (src[count] != '\0' && count < n )
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n) 
	{
		dest[count] = '\0';
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char str_src[] = "He";
	char str_dest[] = "";

	ft_strncpy(str_dest, str_src, 1);
	printf("%s\n", str_dest);

	return (EXIT_SUCCESS);
}
