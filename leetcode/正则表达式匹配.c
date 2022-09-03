#include <stdio.h>
#include <stdbool.h>

bool isMatch(char * s, char * p){
	if(!*p) return !*s;
	
	bool match = *s && (*s == *p || *p == '.');
    if(*(p + 1) == '*')
        return isMatch(s,p + 2) || (match && isMatch(++s,p));
    else
        return match && isMatch(++s,++p);
	
}


int main(char argc, char *argv[]) {
	char arr1[] = "abbbb";
	char arr2[] = "ab...";
	
	bool rule = isMatch(arr1, arr2);
	
	printf("%d", rule);
	
	return 0;
}
