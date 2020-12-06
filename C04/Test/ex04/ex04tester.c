#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int  main(void)
{
	printf("---Expected-output---\n");
	printf("1111011\n1200201\nqd\nuzFdC\n");
	printf("----Actual---output---\n");
	ft_putnbr_base(123, "01");
	printf("\n");
	ft_putnbr_base(1234, "012");
	printf("\n");
	ft_putnbr_base(42, "zudtqcseon");
	printf("\n");
	ft_putnbr_base(69420, "zudtqcseonABCDEF");
	printf("\n");
}
