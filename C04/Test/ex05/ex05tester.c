#include <stdio.h>
#include <string.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("---Expected-output---\n");
	printf("-2147483648__2147483647__0__69__-42_0_0_0_12_0\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_atoi_base("  +-+-+-cbeiehdgeh123","abcdefgihj"));
	printf("%d__",ft_atoi_base("   ----++--+7FFFFFFFa","0123456789ABCDEF"));
	printf("%d__",ft_atoi_base("++-n","nul"));
	printf("%d__",ft_atoi_base("baf","abcdefgh"));
	printf("%d_",ft_atoi_base("  -+-+-+-+-+--+ahahah","ha"));
	printf("%d_",ft_atoi_base(" +-+-++---+--+xd","asdfghj+qwert"));
	printf("%d_",ft_atoi_base(" -+asdfg","asdfg-hjkl"));
	printf("%d_",ft_atoi_base(" -+-+++-","asdfg hjkl"));
	printf("%d_",ft_atoi_base(" \v-+-+++-asd","asdfghjkl"));
	printf("%d\n",ft_atoi_base(" -+-+++-","asdfghjkdl"));
	return 0;
}
