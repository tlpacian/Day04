#include <stdio.h>
void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int  ft_recursive_factorial(int nb)
{
	int  num;
	
	if(nb < 0 || nb > 5)
		return (0);
	if(nb == 1)
	        return (1);
	return (nb * ft_recursive_factorial(nb - 1);
