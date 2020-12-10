#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
    int *arr;
    int i = 0;
    int a = 1;
    int b = 6;
    int **pptr;
    int size;

	a =1;
	b=6;
	i=0;
	printf("---Expected-output---\n");
	printf("Size: 5, Array: 1,2,3,4,5,\n");
	printf("----Actual---output---\n");
    pptr = &arr;
	
    size = ft_ultimate_range(pptr,a,b);
    if (arr ==0)
		printf("SIZE 0\n");
	else
	{
		printf("Size: %d, Array: ",size);
		while(i < size)
		{
			printf("%d,",arr[i]);
			i++;
		}
		printf("\n");
	}
printf("-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	a =-3;
	b=4;
	i=0;
	printf("---Expected-output---\n");
	printf("Size: 7, Array: -3,-2,-1,0,1,2,3,\n");
	printf("----Actual---output---\n");
    pptr = &arr;
	
    size = ft_ultimate_range(pptr,a,b);
    if (arr ==0)
		printf("SIZE 0\n");
	else
	{
		printf("Size: %d, Array: ",size);
		while(i < size)
		{
			printf("%d,",arr[i]);
			i++;
		}
		printf("\n");
	}
	a =5;
	b=5;
	i=0;
printf("-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	
	printf("---Expected-output---\n");
	printf("Size 0 (Null pointer)\n");
	printf("----Actual---output---\n");
    pptr = &arr;
	
    size = ft_ultimate_range(pptr,a,b);
    if (arr ==0)
		printf("SIZE 0 (Null pointer)\n");
	else
	{
		printf("Size: %d, Array: ",size);
		while(i < size)
		{
			printf("%d,",arr[i]);
			i++;
		}
		printf("\n");
	}
	a =10;
	b=4;
	i=0;
printf("-----------------------------\n");
	printf("----------SEPARATOR----------\n");
	printf("-----------------------------\n");
	
	printf("---Expected-output---\n");
	printf("Size 0 (Null pointer)\n");
	printf("----Actual---output---\n");
    pptr = &arr;
	
    size = ft_ultimate_range(pptr,a,b);
    if (arr ==0)
		printf("Size 0 (Null pointer)\n");
	else
	{
		printf("Size: %d, Array: ",size);
		while(i < size)
		{
			printf("%d,",arr[i]);
			i++;
		}
		printf("\n");
	}



    return 0;
}

