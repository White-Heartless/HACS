#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main()
{
    char str[60] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("it's dangerous to go alone, take this @xxxx[{::::::::::>\n");
    printf("----Actual---output---\n");
    strncpy(str, "It's DanGeRous tO go ALOne, tAKe thiS @xXXx[{::::::::::>\n", 60);
    p = ft_strlowcase(p);
    while(1)
    {
        if(*p == 0)
            break;
        printf("%c",*p);
        p++;
    }


    return 0;
}
