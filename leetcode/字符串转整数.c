#include <stdio.h>
#include <math.h>

int myAtoi(char * s){
	long long int result = 0;
	int flag=1;
	while(*s == ' ') {
		s++;
	}
	
	if(*s == '+') {
		s++;
	} else if(*s == '-') {
		flag *= -1;
		s++;
	}
	
	while(*s != '\0') {
		int num = (int)(*s) - 48;
		if(num>=0 && num < 10) {
			result = result * 10 + num;
		} else {
			break;
  		}
  		
		if(result*flag > pow(2, 31)-1) {
			printf("???? %d  %s\n", flag, s);
			
			result = pow(2, 31)-1;
		}
		if(result*flag < pow(-2, 31)) {
			result = pow(2, 31);
		}
		s++;
	}
	result *= flag;
	
	return (int)result;
}

int main(char argc, char *agrv[]) {
	
	char *arr="-91283472332";

	int a = myAtoi(arr);

	printf("%d", a);
	
	return 0;
}

