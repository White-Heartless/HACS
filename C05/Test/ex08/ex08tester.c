#include <stdio.h>
int ft_ten_queens_puzzle();
int main(void)
{
	printf("---Expected-output---\n");
	printf("0257948136\n");
	printf("0258693147\n");
	printf("...\n");
	printf("4605713829\n");
	printf("4609582731\n");
	printf("...\n");
	printf("9742051863\n");
	printf("---Expected-output---\n");
	printf("Expected: 724, Actual: %d\n",ft_ten_queens_puzzle());
	
	return 0;
}
