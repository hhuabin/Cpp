#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * convert(char * s, int numRows){
	if (numRows == 1)
    	return s;
	int len = strlen(s), count = 0, i=0, j=0;
	char *res = (char *)malloc ((len + 1) * sizeof(char));
	
	for(i=0; i<numRows; i++) {
		
		for(j=i; j<len; j+=2*numRows-2) {
			if (i == 0 || i == numRows - 1)
	            res[count++] = s[j];
	        else
	        {
	            res[count++] = s[j];
	            if (j + 2 * (numRows - 1 - i) < len)
	                res[count++] = s[j + 2 * (numRows - 1 - i)];
	        }
		}
	}
	
	res[len] = '\0';
	return res;
}

int main(char argc, char *argv[]) {
    char arr[] = "PAYPALISHIRING", *p;
    
    p = convert(arr, 3);
    
	printf("%s", p);
	return 0;
}
