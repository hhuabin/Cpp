#include <stdio.h>

// ¼ì²âÊÇ·ñº¬ÓĞÖØ¸´×ÖÄ¸
void repeat(char *str, int i) {
    if((i>0 && *str == *(str-1)) || (*str == *(str+1) && *(str+1)!='\0')) {
        *str=(*str)+1;
        repeat(str, i);
    }
}

char * modifyString(char * s){
	int i=0;
	char *str;
	str = &s[0];
    for(i=0; *str!='\0'; i++,str++) {
        if(*str == '?') {
            *str='a';
            repeat(str,i);
        }
    }

    return s;
}

int main() {                                                                              
	char s[] = {'?','a', '?','c','b', '?', '?','?', '?'};
	modifyString(s);
	printf("%s", s);
}
