#include <stdio.h>
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size);

int ft_strlen(char *s)
{
	int i = 0;

	for (; s[i];i++)
		;
	return(i);
}

int main()
{
	char str[] = "Aáccording to all1known\1laws of aviation, there2is\2no way a bee should\6be3able to fly.\tIts wings4are\ftoo small to get its fat\nlittle body\roff the9ground.\bThe bee,\aof course,0flies\vanyway,\vbecause bees don't care\rwhat humans think is\aimpossible";
	
	printf("-----EXPECTED-OUTPUT-----\n");
	printf("00007ffee50de940: 4163 636f 7264 696e 6720 746f 2061 6c6c According to all\n");
	printf("00007ffee50de950: 316b 6e6f 776e 016c 6177 7320 6f66 2061 1known.laws of a\n");
	printf("00007ffee50de960: 7669 6174 696f 6e2c 2074 6865 7265 3269 viation, there2i\n");
	printf("00007ffee50de970: 7302 6e6f 2077 6179 2061 2062 6565 2073 s.no way a bee s\n");
	printf("00007ffee50de980: 686f 756c 6406 6265 3361 626c 6520 746f hould.be3able to\n");
	printf("00007ffee50de990: 2066 6c79 2e09 4974 7320 7769 6e67 7334  fly..Its wings4\n");
	printf("00007ffee50de9a0: 6172 650c 746f 6f20 736d 616c 6c20 746f are.too small to\n");
	printf("00007ffee50de9b0: 2067 6574 2069 7473 2066 6174 0a6c 6974  get its fat.lit\n");
	printf("00007ffee50de9c0: 746c 6520 626f 6479 0d6f 6666 2074 6865 tle body.off the\n");
	printf("00007ffee50de9d0: 3967 726f 756e 642e 0854 6865 2062 6565 9ground..The bee\n");
	printf("00007ffee50de9e0: 2c07 6f66 2063 6f75 7273 652c 3066 6c69 ,.of course,0fli\n");
	printf("00007ffee50de9f0: 6573 0b61 6e79 7761 792c 0b62 6563 6175 es.anyway,.becau\n");
	printf("00007ffee50dea00: 7365 2062 6565 7320 646f 6e27 7420 6361 se bees don't ca\n");
	printf("00007ffee50dea10: 7265 0d77 6861 7420 6875 6d61 6e73 2074 re.what humans t\n");
	printf("00007ffee50dea20: 6869 6e6b 2069 7307 696d 706f 7373 6962 hink is.impossib\n");
	printf("00007ffee50dea30: 6c65               le\n");
	printf("-----ACTUAL---OUTPUT-----(Note, the addresses are going to be different)\n");
	int a = 1;
while(a<9999){a++;} // I know what you are thinking, but for some reason the actual output printf gets skipped if I don't do this, if u know why or how to fix this, tell me
	ft_print_memory(str, ft_strlen(str));
	return(0);
}
