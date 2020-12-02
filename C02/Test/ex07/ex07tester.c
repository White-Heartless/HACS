#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main()
{
    char str[60] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("HACS IS LOVE, HACS IS LIFE!\n");
    printf("----Actual---output---\n");
    strncpy(str, "Hacs Is loVe, HACS is LiFe!\n", 60);
    p = ft_strupcase(p);
    while(1)
    {
        if(*p == 0)
            break;
        printf("%c",*p);
        p++;
    }


    return 0;
}
