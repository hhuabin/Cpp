#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestPalindrome(char * s){
    int length = strlen(s);
    if(length == 0 || length == 1)
        return s;
    int max = 1,start = 0;
    int left,right,index = 0;
    char *str;
    while(index < length - 1){
        left = right = index;
        while(s[right + 1] == s[index++]){
            if(++right == length - 1)
                break;
        }
        while((left > 0) && (right < length - 1) && (s[left - 1] == s[right + 1])){
            left--;
            right++;
        }
        if((right - left + 1) > max){
            max = right - left + 1;
            start = left;
        }
    }
    str = malloc(max + 1);
    strncpy(str, s + start,max);
    str[max] = '\0';
    return str;
}


int main(int argc, char *argv[]) {
	char s[] = "ab";
	char *result;
	result = longestPalindrome(s);

	printf("%s", result);
	return 0;
}
