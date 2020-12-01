#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main()
{
    char str[20] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("0-0-0-0-1-1\n");
    printf("----Actual---output---\n");
    strncpy(str, "0123456789/", 20);
    printf("%d-",ft_str_is_numeric(p));
    strncpy(str,"0123456789:",20);
    printf("%d-",ft_str_is_numeric(p));
    strncpy(str,"012345t6789\n",20);
    printf("%d-",ft_str_is_numeric(p));
    strncpy(str,"69420blazeit",20);
    printf("%d-",ft_str_is_numeric(p));
    strncpy(str,"0123456789",20);
    printf("%d-",ft_str_is_numeric(p));
    strncpy(str,"\0",20);
    printf("%d\n",ft_str_is_numeric(p));
    return 0;
}
