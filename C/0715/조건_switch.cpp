#include<stdio.h>
int main() {
    int input = 0;

    printf("=======메뉴======= : ");
    printf("0에서 40까지 숫자 입력 : ");
    scanf("%d",&input);

    input /= 10;

    switch (input)
    {
    case 1:
        printf("0이상 10 미만");
        break;
    case 2:
        printf("10이상 20 미만");
        break;
    case 3:
        printf("20이상 30 미만");
        break;
    case 4:
        printf("30이상 40 미만");
        break;
    default:
        printf("잘못된 입력입니다");
        break;
    }

    printf("결과 : %f", input*10);

    
}

