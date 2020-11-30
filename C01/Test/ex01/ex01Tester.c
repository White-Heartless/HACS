#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a = 0;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	printf("---Expected-output---\n");
	printf("42\n");
	printf("----Actual---output---\n");
	ft_ultimate_ft(p9);
	printf("%d\n",a);
}
