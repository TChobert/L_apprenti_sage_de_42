#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int nb1;
	int nb2;
	int nb3;

	nb1 = '0';
	nb2 = nb1 + 1;
	nb3 = nb2 + 1;


	while (nb1 <= '7')
	{

		while (nb2 <= '8')
		{
			while (nb3 <= '9')
			{
				ft_putchar(nb1);
				ft_putchar(nb2);
				ft_putchar(nb3);
				ft_putchar(',');
				ft_putchar(' ');
				
				if (nb3	== '9')
				{
					break;
				}
				nb3++;
			}
			if (nb2 == '8')
			{
				break;
			}	
		
			nb2++;
			nb3 = nb2 + 1;
		}
		nb1++;
		nb2 = nb1 + 1;
		nb3 = nb2 + 1;
	}

}

int main(void)
{
	ft_print_comb();

	ft_putchar('\n');

	return 0;
}
