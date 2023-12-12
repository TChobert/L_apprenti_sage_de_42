#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define SEPARATOR ','
#define LAST_SECOND_NB 99
#define LAST_FIRST_NB (LAST_SECOND_NB - 1)
#define ASCII_DIGIT_OFFSET 48

static ssize_t ft_putchar(const char c)
{
	return write(STDOUT_FILENO, &c, sizeof(c));
}

static void ft_print_space(void)
{
	ft_putchar(' ');
}

static void ft_print_endl(void)
{
	ft_putchar('\n');
}

static bool is_last_numbers(const uint8_t a, const uint8_t b)
{
	return (a == LAST_FIRST_NB && b == LAST_SECOND_NB);
}

static void ft_print_numbers_separator(void)
{
	ft_putchar(SEPARATOR);
	ft_print_space();
}

static void ft_print_nb(const uint8_t nb)
{
	ft_putchar(nb / 10 + ASCII_DIGIT_OFFSET);
	ft_putchar(nb % 10 + ASCII_DIGIT_OFFSET);
}


void ft_print_comb2(void)
{
	uint8_t a;
	uint8_t b;

	a = 0;
	while (a <= LAST_FIRST_NB)
	{
		b = a + 1;
		while (b <= LAST_SECOND_NB)
		{
			ft_print_nb(a);
			ft_print_space();
			ft_print_nb(b);
			if (is_last_numbers(a, b) == false)
				ft_print_numbers_separator();
			++b;
		}
		++a;
	}
}		

int main(void)
{
	ft_print_comb2();
	ft_print_endl();
	return EXIT_SUCCESS;
}
