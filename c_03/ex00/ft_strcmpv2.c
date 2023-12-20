#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2)
{
	int count;
		count = 0;

	while (s1[count] >= '\0' && s2[count] >= '\0')
	{
		if (s1[count] != s2[count])
			{
			return s1[count] - s2[count];
			}
		++count;
	}
	return 0;
}

int	main(void)
{
	char *str1 = "SIDu";
	char *str2 = "SIDuy";

	printf("%d\n", ft_strcmp(str1, str2));

	return (EXIT_SUCCESS);
}
