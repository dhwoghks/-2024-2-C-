#include <stdio.h>

int main() {
    int num;
    int check = 0;
    int i;
    printf_s("Please enter a number: ");
    scanf_s("%d", &num);
    for (i = num; i > 0; i--) {
        if (num % i == 0) {
            check += i;
        }
    }
    if (check == (1 + num)) {
        printf("It is a prime number.");
    }
    else {
        printf("It is not a prime number");
    }
    return 0;
}
