#include<stdio.h>
int main() {
    int input = 0;

    printf("=======�޴�======= : ");
    printf("0���� 40���� ���� �Է� : ");
    scanf("%d",&input);

    input /= 10;

    switch (input)
    {
    case 1:
        printf("0�̻� 10 �̸�");
        break;
    case 2:
        printf("10�̻� 20 �̸�");
        break;
    case 3:
        printf("20�̻� 30 �̸�");
        break;
    case 4:
        printf("30�̻� 40 �̸�");
        break;
    default:
        printf("�߸��� �Է��Դϴ�");
        break;
    }

    printf("��� : %f", input*10);

    
}

