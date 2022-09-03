#include <stdio.h>

int main() {
	int a=10, b=20, t;
	int *pa=&a, *pb=&b, *pt=&t;
	int **ppa=&pa, **ppb=&pb, **ppt=&pt;
	int **pc;
	pc=pa;
	pc=pb;
	ppt=ppa;
	ppa=ppb;
	ppb=ppt;
	
	printf("a=%d, b=%d\n*pa=%d, *pb=%d\n**ppa=%d, **ppb=%d\n*pc=%d", a, b, *pa, *pb, **ppa, **ppb, *pc);
}

