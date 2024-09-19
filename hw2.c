#include <stdio.h>

int main(void) {
	double km, mile;
	printf("Please enter Kilometers: ");
	scanf_s("%lf", &km);
	mile = km / 1.609;
	printf("%.1f km is equal to %.1f miles.", km, mile);
	return 0;
}
