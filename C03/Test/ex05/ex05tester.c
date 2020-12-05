#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    	char string[] = "Heartless is a very\0 error prone person";
	char string2[] = " handsome guy.";
	char string0[] = "Heartless is a very\0 error prone person";
    	char string4[] = "Heartless is\0 a sad boy";
	char string5[] = "Heartless is\0 a sad boy";
	char string6[] = " single and ready to mingle.";

	printf("---Expected-Output---\n");
	printf("%lu\n",strlcat(string0, string2, 34));
	printf("%lu\n",strlcat(string4, string6, 39));
	printf("%s\n", string0);
	printf("---Actual-Output---\n");
	printf("%d\n",ft_strlcat(string, string2, 34));
	printf("%d\n",ft_strlcat(string4, string6, 39));
	printf("%s\n", string);

	return (0);
}
