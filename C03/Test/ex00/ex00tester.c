#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
	char str1[] = "I like trains";
	char str2[] = "I like trbins";
	char str3[] = "I like trbins";

	printf("---Expected-Result---\n");
	printf("-1_1_0\n");
	printf("----Actual--Result---\n"); 
	printf("%d_",ft_strcmp(str1,str2));
	printf("%d_",ft_strcmp(str2,str1));
	printf("%d\n",ft_strcmp(str2,str3));
}
