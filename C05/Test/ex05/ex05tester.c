#include <stdio.h>
#include <stdlib.h>

int ft_sqrt();

int main()
{
	printf("---Expected-output---\n");
	printf("0__0__1__2__15__1567__34567__0\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_sqrt(-3));
	printf("%d__",ft_sqrt(0));
	printf("%d__",ft_sqrt(1));
	printf("%d__",ft_sqrt(4));
	printf("%d__",ft_sqrt(225));
	printf("%d__",ft_sqrt(2455489));
	printf("%d__",ft_sqrt(1194877489));
	printf("%d\n",ft_sqrt(2147483647));
    return 0;
}


