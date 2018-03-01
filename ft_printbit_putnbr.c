#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int nb2)
{
	if (nb2 == 0)
		return ;
	ft_putnbr(nb / 2, nb2 - 1);
	ft_putchar(nb % 2 + '0');
}

int	main (void)
{
	unsigned char octet;
	octet = 7;
	int nb2 = 8;
	ft_putnbr(octet, nb2);
	return (0);
}
