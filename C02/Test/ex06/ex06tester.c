#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[20] = "\0";
    char *p = &str[0];

    printf("---Expected-output---\n");
    printf("0-0-0-0-1-1\n");
    printf("----Actual---output---\n");
    strncpy(str, "azAZ\n", 20);
    printf("%d-",ft_str_is_printable(p));
    strncpy(str,"azAZ\a;\r",20);
    printf("%d-",ft_str_is_printable(p));
    strncpy(str,":AZ'!?*~\v",20);
    printf("%d-",ft_str_is_printable(p));
    strncpy(str,"AZCasdIAO[\b",20);
    printf("%d-",ft_str_is_printable(p));
    strncpy(str,"AzTest'!?*~",20);
    printf("%d-",ft_str_is_printable(p));
    strncpy(str,"\0",20);
    printf("%d\n",ft_str_is_printable(p));
    return 0;
}
