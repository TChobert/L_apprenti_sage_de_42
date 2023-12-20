#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;
				count = 0;

	while (count < n)
	{
		if (s1[count] != s2[count])
			return s1[count] - s2[count];

		++count;
	}
	return 0;
}

int	main(void)
{
	char *str1 = "Hello";
	char *str2 = "World";

	printf("%d\n", ft_strncmp(str1, str2, 3));

	return	(EXIT_SUCCESS);
}
