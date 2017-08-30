#include <stdio.h>
int conv(char * str)
{
	int x=0;
	int i=0;
	while(str[i]) {
		x = x*10 + str[i]-48; 
		i++;
	}
	return x;
}
int main(int argc, char ** argv)
{
	printf("Soma = %d\n", conv(argv[1]) + conv(argv[2]));
	return 0;
}