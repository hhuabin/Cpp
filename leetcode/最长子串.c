#include <stdio.h>

int lengthOfLongestSubstring(char * s){
	int length=0;
	char *tail=s, *head=s, *p;
	while(*head != '\0') {
		for(p=tail; p<head; p++) {
			if(*p == *head) {
				tail = p+1;
				break;
			}
		}
		length = (head-tail+1)>length? (head-tail+1) : length;
		head++;
	}
	return length;
}

int main(int agrc, char *argv[]) {
	char arr[] = "asdasdasde";
	char *s = arr;
	int length=0;
	length = lengthOfLongestSubstring(s);
	printf("%d", length); 
} 
