#include <stdio.h>
#include <string.h>

char *ft_strdup();

int main()
{
    char s1[] = "I am unique";
	char s2[] = "I am unique\0 whoops";
	char s3[] = "I am\tunique";
	char s4[] = "I\ram unique";
	char s5[] = "I am\vunique";

    char *d1,*d2,*d3,*d4,*d5;
	
	printf("---Expected-output---\n");
	printf("I am unique\n");
	printf("I am unique\n");
	printf("I am\tunique\n");
	printf("I\ram unique\n");
	printf("I am\vunique\n");
	printf("----Actual---output---\n");
	d1 = ft_strdup(s1);
	printf("%s\n",d1);
    d2 = ft_strdup(s2);
    printf("%s\n",d2);
    d3 = ft_strdup(s3);
    printf("%s\n",d3);
    d4 = ft_strdup(s4);
    printf("%s\n",d4);
    d5 = ft_strdup(s5);
    printf("%s\n",d5);
    return 0;
}

