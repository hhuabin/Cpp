#include <stdio.h>

int main() {
	char *a[5] = {"red", "yellow", "yellow", "yellow", "yellow"};
	int i;
	for(i=0; i<5; i++) {
		printf("%s\n", a[i]);
	}
}

