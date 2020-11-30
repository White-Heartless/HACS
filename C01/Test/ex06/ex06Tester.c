#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

int main(void)
{
	char s[25]= "The cake is not a lie";
	char *ptr = &s[0];
	printf("---Expected-output---\n");
	printf("21\n");
	printf("----Actual---output---\n");
	int x = ft_strlen(ptr);
	printf("%d\n",x);
}
