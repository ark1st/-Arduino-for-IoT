#include<stdio.h>
int main() {
    int input = 0;
    printf("������ �Է��ϼ��� : ");
    scanf("%d",&input);

    if (input%3 == 0) {
        printf("\n%d�� 3�� ��� �Դϴ�.",&input);
    }
    else {
        printf("\n%d�� 3�� ����� �ƴմϴ�.",&input);
    }
}

