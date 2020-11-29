#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int n);

int main(void)
{
	printf("---Expected-output---\n");
	printf("-2147483648__-42__0__42__2147483647\n");
	printf("----Actual---output---\n");
	ft_putnbr((-2147483648));
	write(1, "_", 1);
	write(1, "_", 1);
	ft_putnbr(-42);
	write(1, "_", 1);
	write(1, "_", 1);
	ft_putnbr(0);
	write(1, "_", 1);
	write(1, "_", 1);
	ft_putnbr(42);
	write(1, "_", 1);
	write(1, "_", 1);
	ft_putnbr(2147483647);
}
