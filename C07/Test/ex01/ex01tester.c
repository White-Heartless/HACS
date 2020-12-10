#include <stdio.h>

int *ft_range();

int main()
{
    int *arr;
    int i = 0;
    int a = 1;
    int b = 6;
	printf("---Expected-output---\n");
	printf("1,2,3,4,5,\n");
	printf("----Actual---output---\n");
    arr = ft_range(a,b);
    if (arr == NULL)
		printf("Null\n");
	else
		while(i < (b - a))
		{
			printf("%d,",arr[i]);
			i++;
		}
	printf("\n-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	i = 0;
	a = -3;
	b = 4;
	printf("---Expected-output---\n");
	printf("-3,-2,-1,0,1,2,3,\n");
	printf("----Actual---output---\n");
    arr = ft_range(a,b);
    if (arr == NULL)
		printf("Null\n");
	else
		while(i < (b - a))
		{
			printf("%d,",arr[i]);
			i++;
		}
	printf("\n-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	a = 1;
	b = 1;
	printf("---Expected-output---\n");
	printf("Null\n");
	printf("----Actual---output---\n");
    arr = ft_range(a,b);
    if (arr == NULL)
		printf("Null\n");
	else
		while(i < (b - a))
		{
			printf("%d,",arr[i]);
			i++;
		}
	printf("-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	a=10;
	b=5;
	printf("---Expected-output---\n");
	printf("Null\n");
	printf("----Actual---output---\n");
    arr = ft_range(a,b);
    if (arr == NULL)
		printf("Null\n");
	else
		while(i < (b - a))
		{
			printf("%d,",arr[i]);
			i++;
		}
    return 0;
}

