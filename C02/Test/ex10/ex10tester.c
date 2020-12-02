#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest,char *src, unsigned int size);

int main()
{
    char s1[60] = "What are you doing in my swamp?";
    char s2[60] = "Congratulations, you invented the wheel, again.";
    char *p1 = &s1[0];
    char *p2 = &s2[0];

    printf("---Expected-output---\n");
    printf("Congratulations, you invented the wheel, again.\n");
    printf("----Actual---output---\n");
    ft_strlcpy(p1,p2,60);
    printf("%s\n", s1);

}
