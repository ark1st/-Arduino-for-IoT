#include<stdio.h>
int main() {
    int input = 0;
    printf("정수를 입력하세요 : ");
    scanf("%d",&input);

    if (input%3 == 0) {
        printf("%d는 3의 배수 입니다.",&input);
    }
    else {
        printf("%d는 3의 배수가 아닙니다.",&input);
    }
}

