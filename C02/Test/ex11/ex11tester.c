#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main()
{
    printf("---Expected-output---\n");
    printf("What \\0D do \\0A we \\0C need \\09 so \\0B many \\B0 characters \\E8 for \\E7 anyway?\n");
    printf("----Actual---output---\n");
    ft_putstr_non_printable("What \r do \n we \f need \t so \v many ° characters è for ç anyway?");
    return 0;
}
