#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 14;
	int b = 3;
	int *p1 = &a;
	int *p2 = &b;

	printf("---Expected-output---\n");
	printf("4---2\n");
	printf("----Actual---output---\n");
	ft_div_mod(a, b, p1, p2);
	printf("%d---%d\n",*p1,*p2);
}
