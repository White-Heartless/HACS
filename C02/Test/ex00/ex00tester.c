#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    char str[60] = "Contrary to popular belief, this is not a JoJo reference.";
    char *p = &str[0];
    char error[25] = "You done goofed";
    char *d = &error[0];

    d = ft_strcpy(d,p);
    printf("---Expected-output---\n");
    printf("Contrary to popular belief, this is not a JoJo reference.\n");
    printf("----Actual---output---\n");
    while(1)
    {
        if(*d == '\0')
            break;
        printf("%c",*d);
        d++;
    }
    printf("\n");
    return 0;
}
