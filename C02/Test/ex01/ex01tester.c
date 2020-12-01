#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char s1[113] = "No programmers have been hurt in the production of this script.";
    char s2[113] = " ";
    int j = 0;
    char *p1 = &s1[0];
    char *p2 = &s2[0];

    printf("---Expected-output---\n");
    printf("No programmers have been hurt in the production of this script.\n");
    printf("----Actual---output---\n");
    ft_strncpy(p2,p1,112);
    while (1)
    {
        if(s2[j] == 0 || j == 112)
            break;
        printf("%c",s2[j]);
        j++;
    }
    printf("\n");
    return 0;
}
