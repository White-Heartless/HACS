#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char str1[100] = "I'm running out\0 of Nutella";
    char str12[100] = "I'm running out\0 of Nutella";
    char str2[100] = " of jokes to write. YIKES\0er forget you";
	printf("---Expected-Output---\n");
	printf("%s$\n",strncat(str1,str2,19));
	printf("---Actual-Output---\n");
	printf("%s$\n",ft_strncat(str12,str2,19));
    return 0;
}

