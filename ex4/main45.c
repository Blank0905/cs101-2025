#include <stdio.h>

void hanoitower (int n, char rod_start, char rod_end, char rod_use) {
	if(n==1){
		printf("Move disk 1 from rod %c to rod %c \n", rod_start, rod_end);
		return;
	}
	hanoitower (n-1, rod_start, rod_use, rod_end);
	printf("Move disk %d from rod %c to rod %c \n", n, rod_start, rod_end);
	hanoitower(n-1, rod_use, rod_end, rod_start);
}

int main() {
	int n = 5;
	hanoitower (n, 'A', 'B', 'C');
	return 0;
} 
