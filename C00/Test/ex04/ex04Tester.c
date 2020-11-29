#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
	printf("---Expected-output---\n");
	printf("N--P--P--P--P\n");
	printf("----Actual---output---\n");
	ft_is_negative((-42));
	write(1, "-", 1);
	write(1, "-", 1);
	ft_is_negative(0);
	write(1, "-", 1);
	write(1, "-", 1);
	ft_is_negative(3);
	write(1, "-", 1);
	write(1, "-", 1);
	ft_is_negative(42);
	write(1, "-", 1);
	write(1, "-", 1);
	ft_is_negative(30000);
}
