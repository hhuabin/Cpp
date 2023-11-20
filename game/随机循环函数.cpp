#include <stdio.h>
#include <stdlib.h>

int obj[4][4] = {
	{0, 1, 0, 0},
	{0, 0, 1, 1},
	{1, 0, 0, 1},
	{1, 0, 0, 0},
};

void playAnimation(int aniId) {
	printf("%d", aniId);
}

int main() {
	int pos = 0;
	while(1) {
		int x = rand() % 4;
		while(!obj[pos][x]) {
			x = rand() % 4;
		}
		playAnimation(x);
		pos = x;
	}
	return 0;
}
