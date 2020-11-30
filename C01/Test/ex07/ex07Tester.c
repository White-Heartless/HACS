#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int *ptr = &arr[0];
	printf("---Expected-output---\n");
	printf("15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,\n");
	printf("----Actual---output---\n");
	ft_rev_int_tab(ptr,15);
	int i = 0;
	while (i<15)
	{
	printf("%d,",arr[i]);
	i++;
	}
	printf("\n");
}
