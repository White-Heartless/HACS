#include <stdio.h>

void ft_putchar(char c);

int main()
{
	printf("---Expected-Output---\n");
	printf("0123456789\n");
	printf("----Actual--Output---\n");

	char i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
