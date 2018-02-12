

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

void ft_putchar(char c)
{
write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	ft_putnbr(atoi(av[1]));	
	ft_putchar('\n');
	return 0;
}
