#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
	char str1[] = "I like trains";
	char str2[] = "I like trbins";

	printf("---Expected-Result---\n");
	printf("-1\n");
	printf("----Actual--Result---\n"); 
	printf("%d\n",ft_strcmp(str1,str2));
}
