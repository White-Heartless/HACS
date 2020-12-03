#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main()
{
    printf("---Expected-output---\n");
    printf("What \\0d do \\0a we \\0c need \\09 so \\0b many \\0d characters \\0c for \\09 anyway?\n");
    printf("----Actual---output---\n");
    ft_putstr_non_printable("What \r do \n we \f need \t so \v many \r characters \f for \t anyway?");
    return 0;
}
