#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
	char str1[] = "I like train";
	char str2[] = "I like trbins";
	char str3[] = "I like trbins";

	printf("---Expected-Result---\n");
	printf("-1_0_0_0_0_0_1\n");
	printf("----Actual--Result---\n"); 
	printf("%d_",ft_strncmp(str1,str2,13));
	printf("%d_",ft_strncmp(str1,str2,0));
	printf("%d_",ft_strncmp(str1,str2,3));
	printf("%d_",ft_strncmp(str2,str3,5));
	printf("%d_",ft_strncmp(str2,str3,20));
	printf("%d_",ft_strncmp(str2,str1,2));
	printf("%d\n",ft_strncmp(str2,str1,20));
}
