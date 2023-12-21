#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	signed int countdest;
				countdest= 0;
	signed int countsrc;
				countsrc = 0;

	while (dest[countdest] != '\0')
	{
		++countdest;
	}
	while (src[countsrc] != '\0')
	{
		dest[countdest] = src[countsrc];

		++countdest;
		++countsrc;
	}
	dest[countdest] = '\0';
	return (dest);
}

int	main(void)
{
	char str1[] = "Chat";
	char str2[] = "Bat";

	char *new_str = (malloc(strlen(str1) + strlen(str2) + 1));

	strcpy(new_str, str1);

	printf("%s\n", new_str);

	printf("%s\n", ft_strcat(new_str, str2));

	free(new_str);

	return (EXIT_SUCCESS);
}
