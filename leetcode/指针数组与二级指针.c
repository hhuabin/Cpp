#include <stdio.h>

int main() {
	char *a[5] = {"red", "yellow", "green", "green", "green"};
	char **pc;
	pc=a;
	(*pc)++;
	printf("%s", *pc);
	return 0;
}

