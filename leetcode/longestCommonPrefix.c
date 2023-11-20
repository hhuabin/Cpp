#include <stdio.h>
#include <string.h>


// 最长公共前缀
char * longestCommonPrefix(char ** strs, int strsSize){
	if(strsSize == 0) return "";
	if(strsSize == 1) return *strs;
	
	int i, j;
	short int flag = 0;
	for(i=0; i<strlen(strs[0]); i++) {
		for(j=1; j<strsSize; j++) {
			if(strs[0][i] != strs[j][i]) {
//				printf("命中");
				strs[0][i] = '\0';
				flag = 1;
				break;
			}
		}
//		printf("%s\n", strs[0]);
		if(flag==1) break;
	}
	return strs[0];
}

int main() {
	char *a[3] = {"green", "green", "green"};
	char *pc;
	pc = longestCommonPrefix(a, 3);

	printf("%s\n", pc);
	return 0;
}
