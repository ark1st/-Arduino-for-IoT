#include<stdio.h>
int main() {
    int num;

    printf("=======MENU======= : ");
    printf("1부터 3의 숫자를 입력하세요 ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("1을 입력하셨네요");
        break;
    case 2:
        printf("2을 입력하셨네요");
        break;
    case 3:
        printf("3을 입력하셨네요");
        break;
    default:
        printf("3 이상을 입력하셨네요");
        break;
    }




    
}

