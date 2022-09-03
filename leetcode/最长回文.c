#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//¸´ÖÆ×Ö·û´®
void stringCopy(char *newstr, char *str, int length) {
	printf("length=%d\n",length);
	int i=0;
	for(i=0; i<length; i++) {
		*newstr = *str++;
		if(i<length-1) {
			newstr++;
		}
	}
}

// ÅÐ¶Ï»ØÎÄ
char *palindromeStr(char *s, char *tail, char *head) {
	char *str=NULL;
	while(tail>s && *head!='\0') {
		if(*(tail-1) == *(head+1)) {
			tail--, head++;
		} else {
			str = (char*)malloc((head-tail+1+1) * sizeof(char));
			printf("head-tail+1=%d\n", head-tail+1);
			strncpy(str, tail, head-tail+1);
			*(str+(head-tail+1))='\0';
			printf("str=%s\n", str);
			return str;
		}
	}
	str = (char*)malloc((head-tail+1+1) * sizeof(char));
	printf("head-tail+1=%d\ntail=%s\n", head-tail+1, tail);
	strncpy(str, tail, head-tail+1);
	*(str+(head-tail+1))='\0';
	printf("str=%s\n", str);
	return str;
}

char * longestPalindrome(char * s){
	int length = 0;
	char *tail=s, *head=s, *p, *result=s, *test;
	for(p=s; *p!='\0'; p++) {

		if( *p==*(p+1) ){
			test = palindromeStr(s, p, p+1);
			printf("test=%s\nstrlen(test)=%d\n", test, strlen(test));
			if(strlen(test) > length) {
				result = test;
				printf("\n");
				length = strlen(test);
			}
		}
		if(p>s && *(p-1)==*(p+1) ) {
			test = palindromeStr(s, p-1, p+1);
			printf("test=%s\nstrlen(test)=%d\n", test, strlen(test));
			if(strlen(test) > length) {
				result = test;
				printf("\n");
				length = strlen(test);
			}
		}
	}
	if(length==0) {
		result = (char*)malloc(sizeof(char)*2);
		result=s;
		*(result+sizeof(char)) = '\0';
		return result;
	}
	return result;
}

int main(int argc, char *argv[]) {
	char s[] = "babad";
	char *result;
	result = longestPalindrome(s);
	
	printf("%s", result);
	return 0;
}

