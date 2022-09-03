// 盛最多水的容器
#include <stdio.h>

int maxArea(int* height, int heightSize){
	int area = 0, temporaryArea = 0;
	int left=0, right=heightSize-1, high=0;
	
	
	while(left < right) {
		if(*(height+left) < *(height+right)) {
			temporaryArea = (right-left) * *(height+left++);
		} else {
			temporaryArea = (right-left) * *(height+right--);
		}
		
		if(temporaryArea > area) {
			area = temporaryArea;
		}
	}

	return area;
}

int main(char argc, char *argv[]) {

	int arr[] = {1,8,6,2,5,4,8,3,7};
	int area = maxArea(arr, 9);
	
	printf("%d\n", area);

	return 0;
}
