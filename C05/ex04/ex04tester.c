#include <stdio.h>
#include <stdlib.h>
int ft_fibonacci(int index);
int main()
{
    printf("---Expected-output---\n");
	printf("-1_0_1_1_2_3_5_8_13_21_1836311903\n");
	printf("----Actual---output---\n");
	printf("%d_",ft_fibonacci(-3));
	printf("%d_",ft_fibonacci(0));
	printf("%d_",ft_fibonacci(1));
	printf("%d_",ft_fibonacci(2));
	printf("%d_",ft_fibonacci(3));
	printf("%d_",ft_fibonacci(4));
    printf("%d_",ft_fibonacci(5));
	printf("%d_",ft_fibonacci(6));
	printf("%d_",ft_fibonacci(7));
	printf("%d_",ft_fibonacci(8));
	printf("%d\n",ft_fibonacci(46));
	return 0;
}

