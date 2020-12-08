#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int main()
{
	printf("---Expected-output---\n");
	printf("0__1__6__120__3628800\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_recursive_factorial(-5));
	printf("%d__",ft_recursive_factorial(0));
	printf("%d__",ft_recursive_factorial(3));
	printf("%d__",ft_recursive_factorial(5));
	printf("%d\n",ft_recursive_factorial(10));
	return 0;
}

