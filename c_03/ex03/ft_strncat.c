#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	countdest;
					countdest = 0;
	unsigned int	countsrc;
					countsrc = 0;

	while (dest[countdest] != '\0')
		++countdest;

	while (countsrc <= nb - 1)
	{
		dest[countdest] = src[countsrc];

		++countdest;
		++countsrc;
	}
	dest[countdest] = '\0';
	return dest;
}

int main(void)
{
	char str1[] = "Le chat rentre chez lui.";
	char str2[] = " Il va dormir.";

	char *new_str = (malloc(strlen(str1) + strlen(str2) + 1));

	strcpy(new_str, str1);

	printf("%s\n", new_str);

	printf("%s\n", ft_strncat(new_str, str2, 9));

	free(new_str);

	return	(EXIT_SUCCESS);
}
