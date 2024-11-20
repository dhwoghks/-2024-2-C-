#include <stdio.h>
#include <math.h>

double getSd(double * arr) {
	double sd=1;
	double mean = 1;
	double temp = 0;
	mean = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	for (int i = 0; i < 5; i++) {
		temp += pow(arr[i] - mean, 2);
	}
	sd = sqrt(temp / 5);

	return sd;
}
int main() {
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf_s("%lf %lf %lf %lf %lf", &arr[0], & arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3lf", getSd(arr));
	return 0;
	
}
