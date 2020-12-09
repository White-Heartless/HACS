#include <stdio.h>
#include <stdlib.h>

int ft_find_next_prime(int nb);

int main(void)
{
	printf("---Expected-output---\n");
	printf("2_2_2_2_3_7823_2000000011\n");
	printf("---Expected-output---\n");
	printf("%d_",ft_find_next_prime(-3));
printf("%d_",ft_find_next_prime(0));
printf("%d_",ft_find_next_prime(1));
printf("%d_",ft_find_next_prime(2));
printf("%d_",ft_find_next_prime(3));
printf("%d_",ft_find_next_prime(7823));
printf("%d\n",ft_find_next_prime(2000000000));
}
