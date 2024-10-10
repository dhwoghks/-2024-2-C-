#include <stdio.h>

int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	binaryscale(num);
	return 0;
}

int  binaryscale(int num) {
	if (num == 0) {
		return 0;
	}
	if (num % 2 == 0 ){
		binaryscale(num / 2);
		printf("0");
	}
	else {
		binaryscale(num / 2);
		printf("1");
	}
}
