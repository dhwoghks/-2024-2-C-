#include <stdio.h>

int main() {
    int i;
    int j;
    for (i = 0; i < 5; i++) {
        for (j = 4 - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < 1 + i*2; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
