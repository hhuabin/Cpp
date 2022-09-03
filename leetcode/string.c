#include <stdio.h>

int main() {
	char a[5], *str = "jsehaf";
	int i;
	scanf("%s", a);
	printf("%s\n", a);
	for(i=0; a[i]!='\0'; i++) {
		printf("%c", a[i]);
	}
	str = "hello";
	printf("\n%c", *str);
	
	return 0;
} 
