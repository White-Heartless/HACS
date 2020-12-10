#include <stdio.h>

char *ft_strjoin();

int main()
{
	char *arr[5] = {"ciao", "mamma", "guarda", "come", "concateno"};
	char *res;
	res = ft_strjoin(5,arr,"<->");
	printf("%s\n",res);
}
