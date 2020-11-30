#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int arr[15] = {46,114,177,-74,238,-115,1,1,1,1,1,42,-42,69420,-12345};
	int *ptr = &arr[0];
	printf("---Expected-output---\n");
	printf("-12345,-115,-74,-42,1,1,1,1,1,42,46,114,177,238,69420,\n");
	printf("----Actual---output---\n");
	ft_sort_int_tab(ptr,15);
	int i = 0;
	while (i<15)
	{
	printf("%d,",arr[i]);
	i++;
	}
	printf("\n");
}
