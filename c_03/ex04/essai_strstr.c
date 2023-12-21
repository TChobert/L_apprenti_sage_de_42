#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	signed int	count;
		count = 0;

	while (s1[count] == s2[count])
	{
		return 1;
		++count;
	}
	return 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	signed int	count;
				count = 0;
	signed int	count2;
				count2 = 0;
	char *found_adr = NULL;
	char *no_match = NULL;

	while (str[count] != to_find[0] && str[count] != '\0')
		++count;

	found_adr = &str[count];
	
	if (str[count] == to_find[0])
	{
		while (str[count + count2] == to_find[count2])
		{
			if (to_find[count2] == '\0')
			{
				return found_adr;
			}	
			++count2;
		}	
	}
	return no_match;
}

int main(void)
{
	char str[] = "Chat";
	char to_find[] = "t";

	printf("%s\n", ft_strstr(str, to_find));

	return	(EXIT_SUCCESS);	
}
