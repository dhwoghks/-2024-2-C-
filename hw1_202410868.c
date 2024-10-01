#include <stdio.h>

int main() {
    int dj, ss, g; // 대중교통, 생활서비스, 기타
    double sh=0, kh=0; // 신한 할인 국ㅁ니 하링ㄴ
    double shy, khy; //할인률

    printf("*** 신한/국민 K-패스 체크카드 시뮬레이션 프로그램 ***\n\n");

    printf("월평균 대중교통 요금: ");
    scanf_s("%d", &dj);
    while (dj < 0) {
        printf("0원 이상의 값으로 다시 입력하세요.\n월평균 대중교통 요금: ");
        scanf_s("%d", &dj);
    }

    printf("월평균 생활서비스 결제액: ");
    scanf_s("%d", &ss);
    while (ss < 0) {
        printf("0원 이상의 값으로 다시 입력하세요.\n월평균 생활서비스 결제액: ");
        scanf_s("%d", &ss);
    }

    printf("월평균 기타 결제액: ");
    scanf_s("%d", &g);
    while (g < 0) {
        printf("0원 이상의 값으로 다시 입력하세요.\n월평균 기타 결제액: ");
        scanf_s("%d", &g);
    }
    //printf("%d %d %d", dj, ss, g);

    //신한부터
    if (dj + ss + g>= 500000) {
        if (dj * 0.1 >= 5000) {
            sh += 5000;
        }
        else {
            sh += dj * 0.1;
        } 
        
        if (ss * 0.02 >= 5000) {
            sh += 5000;
        }
        else {
            sh += ss * 0.02;
        }
    }
    else if (dj + ss + g >= 200000) {
        if (dj * 0.1 >= 2000) {
            sh += 2000;
        }
        else {
            sh += dj * 0.1;
        }
        if (ss * 0.02 >= 2000) {
            sh += 2000;
        }
        else {
            sh += ss * 0.02;
        }
    }

    //국민은행 
    if (dj + ss + g >= 200000) {
        if (dj * 0.1 >= 2000) {
            kh += 2000;
        }
        else {
            kh += dj * 0.1;
        }
        if (ss * 0.02 >= 8000) {
            kh += 8000;
        }
        else {
            kh += ss * 0.02;
        }
    } 

    shy = sh / (dj + ss + g) * 100;
    khy = kh / (dj + ss + g) * 100;
    printf("\n신한 K-패스 체크카드의 예상 할인 금액은 %.0f원이며, 할인률은 %.2f%%입니다.\n국민 K-패스 체크카드의 예상 할인 금액은 %.0f원이며, 할인률은 %.2f%%입니다.\n", sh, shy, kh, khy);
    if (shy > khy) {
        printf("따라서 신한 K-패스 체크카드가 나은 선택입니다.");
    }
    else if (shy < khy) {
        printf("따라서 국민 K-패스 체크카드가 나은 선택입니다.");

    }
    else {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.");
    }

    return 0;
}
