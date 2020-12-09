#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int  main(void)
{
	printf("---Expected-output---\n");
	printf("1111011\n-1200201\nqd\nuzFdC\n-cbeheidgei\n\n\n");
	printf("----Actual---output---\n");
	ft_putnbr_base(123, "01");
	printf("\n");
	ft_putnbr_base(-1234, "012");
	printf("\n");
	ft_putnbr_base(42, "zudtqcseon");
	printf("\n");
	ft_putnbr_base(69420, "zudtqcseonABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "abcdefghij");
	printf("\n");
	ft_putnbr_base(69420, "zudtqcseon ABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "abcdef\vghij");
	printf("\n");
}
