#include<stdio.h>
int main() {
    int input = 0;
    int pw = 1234;
    printf("��й�ȣ�� �Է��ϼ��� : ");
    scanf("%d",&input);

    if (pw == input) {
        printf("��й�ȣ�� �¾ҽ��ϴ�.");
    }
    else {
        printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");
    }
}

