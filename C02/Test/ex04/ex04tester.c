#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char str[20] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("0-0-0-0-1-1\n");
    printf("----Actual---output---\n");
    strncpy(str, "azAZ", 20);
    printf("%d-",ft_str_is_lowercase(p));
    strncpy(str,"azAZ;",20);
    printf("%d-",ft_str_is_lowercase(p));
    strncpy(str,":az\n",20);
    printf("%d-",ft_str_is_lowercase(p));
    strncpy(str,"azciao|",20);
    printf("%d-",ft_str_is_lowercase(p));
    strncpy(str,"aztest",20);
    printf("%d-",ft_str_is_lowercase(p));
    strncpy(str,"\0",20);
    printf("%d\n",ft_str_is_lowercase(p));
    return 0;
}
