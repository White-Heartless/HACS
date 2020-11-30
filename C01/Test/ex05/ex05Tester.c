#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
	char s[60]= "HACS is the best bot in the world";
	char *ptr = &s[0];
	printf("---Expected-output---\n");
	printf("HACS is the best bot in the world\n");
	printf("----Actual---output---\n");
	ft_putstr(ptr);
	printf("\n");
}
