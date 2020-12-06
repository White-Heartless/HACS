#include <string.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char s0[] = "stringa 1";
	char s1[] = "stringa2";
	char s2[] = "What are you hoping to find by digging in my functions?";
	char s3[] = "";
	char s4[] = "How bout a newline \n you punk";
	char s5[] = "Ora\aora\vora\rora\bora!";
	char s6[] = "Muda\emuda\fmuda\tmuda\0muda!";
	char s7[] = "This\0isn't even my final character";
	char s8[] = "Congrats i guess Yikésˆ˜`";

	printf("---Expected-Output---\n");
	printf("%lu--%lu--%lu--%lu--%lu--%lu--%lu--%lu--%lu\n",strlen(s0),strlen(s1),strlen(s2),strlen(s3),strlen(s4),strlen(s5),strlen(s6),strlen(s7),strlen(s8));
	printf("----Actual---Output---\n");
	printf("%d--%d--%d--%d--%d--%d--%d--%d--%d\n",ft_strlen(s0),ft_strlen(s1),ft_strlen(s2),ft_strlen(s3),ft_strlen(s4),ft_strlen(s5),ft_strlen(s6),ft_strlen(s7),ft_strlen(s8));	
}
