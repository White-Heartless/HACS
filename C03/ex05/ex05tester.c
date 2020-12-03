#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char string[] = "Heartless is a very\0 error prone person";
	char string2[] = " handsome guy.";
	char string0[] = "Heartless is a very\0 error prone person";

	printf("---Expected-Output---\n");
	printf("%lu -- ",strlcat(string0, string2, 34));
	printf("%s\n", string0);
	printf("---Actual-Output---\n");
	printf("%d -- ",ft_strlcat(string, string2, 34));
	printf("%s\n", string);

	return (0);
}
