#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a = 69;
	int b = 42;
	int *p1 = &a;
	int *p2 = &b;

	printf("---Expected-output---\n");
	printf("42---69\n");
	printf("----Actual---output---\n");
	ft_swap(p1, p2);
	printf("%d---%d\n",*p1,*p2);
}
