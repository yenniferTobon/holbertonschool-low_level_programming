#include <stdio.h>
/**
* main - print sereval sizeof
* rerurn: 0
*/
int main(void){
	int i;
	double d;
	char c;

	printf("Size of an int is: %lu.\n", sizeof(i));
	printf("Size of an double is: %lu.\n", sizeof(d));
	printf("Size of an char is: %lu.\n", sizeof(c));
	return(0);
}
