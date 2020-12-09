#include <stdio.h>
#include <stdlib.h>

int ft_is_prime();

int main()
{
	printf("---Expected-output---\n");
	printf("0_0_0_1_1_0_1_1\n");
	printf("----Actual---output---\n");
    printf("%d_",ft_is_prime(-3));
    printf("%d_",ft_is_prime(0));
	printf("%d_",ft_is_prime(1));
	printf("%d_",ft_is_prime(2));
	printf("%d_",ft_is_prime(5));
	printf("%d_",ft_is_prime(42));
	printf("%d_",ft_is_prime(7919));
	printf("%d\n",ft_is_prime(1500450271));

	return 0;
}

