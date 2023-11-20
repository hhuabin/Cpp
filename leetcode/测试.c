#include <stdio.h>

int main(int agrc, char *argv[]) {
	int i=1;
	
//	printf("%d, %d\n", i, i++ + i++ - ++i);
	
	printf("%d\n", i++ + i++);
	
	printf("%d\n", ++i + ++i);
//	À¬»øÌ·ºÆÇ¿
	return 0;
}

