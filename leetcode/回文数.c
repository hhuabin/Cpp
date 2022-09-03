#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(int x){
	if(x<0) {
		return false;
	}
	
    short a = 0;
    long long int result = 0;
    int y = x;
    while(x!=0) {
    	a = x % 10;
    	x /= 10;
    	result = result*10+a;
	}
	printf("%d %d\n", result, y);
	if(result == y) {
		return true;
	} else {
		return false;
	}
}


int main(char argc, char *argv[]) {
	bool a;
	int b;
	scanf("%d", &b);

	a = isPalindrome(b);

	printf("%d", a);

	return 0;

}

