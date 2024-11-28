#include <stdio.h>

int convCase(int ch) {
    const int diff = 'a' - 'A'; 
    if (ch >= 'A' && ch <= 'Z') 
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else 
        return ch;
}

int main(void) {
    int ch=0;

    printf("문자 입력: ");
    while (ch != '\n') {
        ch = getchar();
        ch = convCase(ch);
        putchar(ch);
    }
    return 0;
}
