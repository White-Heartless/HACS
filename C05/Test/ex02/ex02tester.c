#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main()
{
	printf("---Expected-output---\n");
	printf("0__1__1__9__625__74088\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_iterative_power(5, -3));
	printf("%d__",ft_iterative_power(0, 0));
	printf("%d__",ft_iterative_power(5, 0));
	printf("%d__",ft_iterative_power(3, 2));
	printf("%d__",ft_iterative_power(5, 4));
	printf("%d\n",ft_iterative_power(42, 3));
    return 0;
}