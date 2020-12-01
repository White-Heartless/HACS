#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main()
{
    char str[65] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
    printf("----Actual---output---\n");
    strncpy(str, "sALut, cOmMEnt tu VaS ? 42MoTs quARAnte-dEux; CinqUANte+et+Un\n", 65);
    p = ft_strcapitalize(p);
    while(1)
    {
        if(*p == 0)
            break;
        printf("%c",*p);
        p++;
    }


    return 0;
}
