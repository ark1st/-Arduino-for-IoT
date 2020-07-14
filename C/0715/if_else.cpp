#include<stdio.h>
int main() {
    int input = 0;
    int pw = 1234;
    printf("비밀번호를 입력하세요 : ");
    scanf("%d",&input);

    if (pw == input) {
        printf("\n비밀번호가 맞았습니다.");
    }
    else {
        printf("\n비밀번호가 틀렸습니다.");
    }
}

