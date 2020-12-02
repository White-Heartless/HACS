#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
	char str1[] = "I like trbins";
	char str2[] = "I like trains";

	printf("---Expected-Result---\n");
	printf("1-0\n");
	printf("----Actual--Result---\n"); 
	printf("%d-",ft_strncmp(str1,str2,11));
	printf("%d\n",ft_strncmp(str1,str2,8));
}
