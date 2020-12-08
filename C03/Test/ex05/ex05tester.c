#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    	char string[150] = "Heartless is a very\0 error prone person";
	char string2[150] = " handsome guy.";
	char string0[150] = "Heartless is a very\0 error prone person";
    	char string4[150] = "Heartless is\0 a sad boy";
	char string5[150] = "Heartless is\0 a sad boy";
	char string6[150] = " single and ready to mingle.";

	printf("---Expected-Output---\n");
	printf("%lu\n",strlcat(string0, string2, 34));
	printf("%lu\n",strlcat(string4, string6, 39));
	printf("---Actual-Output---\n");
	printf("%d\n",ft_strlcat(string, string2, 34));
	printf("%d\n",ft_strlcat(string5, string6, 39));

	return (0);
}
