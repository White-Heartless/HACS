#include <stdio.h>
#include <string.h>

int ft_atoi(char *str);

int main(void)
{
	printf("---Expected-output---\n");
	printf("-2147483648__2147483647__0__69__-42\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_atoi("  +-+-+-2147483648abc"));
	printf("%d__",ft_atoi("   ----++--+2147483647asda"));
	printf("%d__",ft_atoi("++-0"));
	printf("%d__",ft_atoi("69"));
	printf("%d\n",ft_atoi(" \v -+-+-+-+-+--+42aaaaaaaaa"));
	return 0;
}

