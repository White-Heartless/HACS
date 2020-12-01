#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main()
{
    char str[20] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("0-0-0-0-1-1\n");
    printf("----Actual---output---\n");
    strncpy(str, "azAZ", 20);
    printf("%d-",ft_str_is_uppercase(p));
    strncpy(str,"azAZ;",20);
    printf("%d-",ft_str_is_uppercase(p));
    strncpy(str,":AZ\n",20);
    printf("%d-",ft_str_is_uppercase(p));
    strncpy(str,"AZCIAO|",20);
    printf("%d-",ft_str_is_uppercase(p));
    strncpy(str,"AZTEST",20);
    printf("%d-",ft_str_is_uppercase(p));
    strncpy(str,"\0",20);
    printf("%d\n",ft_str_is_uppercase(p));
    return 0;
}
