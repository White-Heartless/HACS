#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr);

int main(void)
{
	int a = 0;
	int *p = &a;
	printf("---Expected-output---\n");
	printf("42\n");
	printf("----Actual---output---\n");
	ft_ft(p);
	printf("%d\n",a);
}
