#include<stdio.h>
int main() {
    int num;

    printf("=======MENU======= : ");
    printf("1���� 3�� ���ڸ� �Է��ϼ��� ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("1�� �Է��ϼ̳׿�");
        break;
    case 2:
        printf("2�� �Է��ϼ̳׿�");
        break;
    case 3:
        printf("3�� �Է��ϼ̳׿�");
        break;
    default:
        printf("3 �̻��� �Է��ϼ̳׿�");
        break;
    }




    
}

