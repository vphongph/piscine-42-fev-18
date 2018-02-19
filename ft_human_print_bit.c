#include <unistd.h>

void	ft_human_print_bit(unsigned char coco)
{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;

	a = b = c = d = e = f = g = h = '0';

	while (coco-- > 0 && coco < 254)
	{
		if (b == '1' && c == '1' && d == '1' && e == '1' && f == '1' && g == '1' && h == '1')
		{ 
			a = '1'; b = c = d = e = f = g = h = '0';
		}
		else if (c == '1' && d == '1' && e == '1' && f == '1' && g == '1' && h == '1')
		{
		 	b = '1'; c = d = e = f = g = h = '0';
		}
		else if (d == '1' && e == '1' && f == '1' && g == '1' && h == '1')
		{
			c = '1'; d = e = f = g = h = '0';
		}
		else if (e == '1' && f == '1' && g == '1' && h == '1')
		{	
	 		d = '1'; e = f = g = h = '0';
	 	}
		else if (f == '1' && g == '1' && h == '1')
	 	{
			e = '1'; f = g = h = '0';
		}
		else if (g == '1' && h == '1')
		{
			f = '1'; g = h = '0';
		}
		else if (h == '1')
		{
			g = '1'; h = '0';
		}
		else
			h = '1';
	}

	if (coco == 255 - 1)
		write(1, "8=====> ~ ~ ~", 13);
	else 
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &e, 1);
		write(1, &f, 1);
		write(1, &g, 1);
		write(1, &h, 1);
	}
}


int	main(void)
{
	unsigned char coco = 255;
	ft_human_print_bit(coco);
}
