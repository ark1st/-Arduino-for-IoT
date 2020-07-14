#include<stdio.h>
int main() {
    double num1, num2, result;

    printf("=======체질량 계산 프로그램=======\n");
    printf("키와 몸무게를 입력하세요 ");
    scanf("%f %f",&num1, &num2);

    result = num1 / ((num2/10) * (num2/10));



    if (result >= 30) {
        printf("고도비만");
    }
    else {
        if (result >= 25) {
            printf("비만");
        }
        else {
            if (result >= 23) {
                printf("과제중");
            }
            else {
                if (result >= 18.5) {
                    printf("정상");
                }
                else {
                    printf("저체중");
                }       
            }
        }
    }

    printf("\n결과 : %f",result);
}

