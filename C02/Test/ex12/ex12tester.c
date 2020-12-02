#include <stdio.h>
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size);

int ft_strlen(char *s)
{
	int i = 0;

	for (; s[i];i++)
		;
	return(i);
}

int main()
{
	char str[] = "According to all1known\1laws of aviation, there2is\2no way a bee should\6be3able to fly.\tIts wings4are\ftoo small to get its fat\nlittle body\roff the9ground.\bThe bee,\aof course,0flies\vanyway,\vbecause bees don't care\rwhat humans think is\aimpossible";
	ft_print_memory(str, ft_strlen(str));

	return(0);
}
