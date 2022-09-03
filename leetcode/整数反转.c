#include <stdio.h>
#include <math.h>

int reverse(int x){
    short a = 0;
    long long int result = 0;
    while(x!=0) {
    	a = x % 10;
    	x /= 10;
    	result = result*10+a;
	}
	if(result<pow(-2, 31) || result>pow(2, 31)-1) {
		return 0;
	}
    return result;
}


int main(char argc, char *argv[]) {
	int a[1]={1};
//	scanf("%d", &a);
//
//	printf("%d\n", -11%10);
//	
//	a = reverse(a);
//	
//	printf("%d", a);

	int *b = a;
	a[0] = 2;
	printf("%d  %d", a, *b);
	
	return 0;

}

