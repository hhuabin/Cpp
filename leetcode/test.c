#include <stdio.h>

void swap3(int *px, int *py);

int main() {
//	int a=1, b=2;
	char str = 'a',*x;
	x=&str;
	*x=(*x)+1;
	
	int a = 'a';
	
	printf("a = %d\n", a);
	
	printf("x=%c", 'b'+1);
//	int *pa=&a, *pb=&b;
//	swap3(pa, pb);
//	printf("a=%d,b=%d", a,b);
//	return 0;
}

void swap3(int *px, int *py) {
	int *pt;
	pt = px;
	px = py;
	py = pt;
	
	printf("%d,  %d\n", *px, *py);
}
