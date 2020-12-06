#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
	char s1[60]= "HACS is the best bot in the world.\n";
	char s2[60]= "Except maybe\a Deep\v Tought.\n";
	char s3[60]= "And Open Ai\rAnd Open ai Bot.\n";
	char s4[80]= "And\e that one bot that beat the chess world chapion.\n";
	char s5[60]= "But other than those HACS is the best.\n";

	printf("---Expected-output---\n");
	printf("HACS is the best bot in the world.\n");
	printf("Except maybe\a Deep\v Tought.\n");
	printf("And Open Ai\rAnd Open ai Bot.\n");
	printf("And\e that one bot that beat the chess world chapion.\n");
	printf("But other than those HACS is the best.\n");
	printf("----Actual---output---\n");
	ft_putstr(s1);
	ft_putstr(s2);
	ft_putstr(s3);
	ft_putstr(s4);
	ft_putstr(s5);
	printf("\n");
}
