#include<stdio.h>
int main() {
    double num1, num2, result;

    printf("=======ü���� ��� ���α׷�=======\n");
    printf("Ű�� �����Ը� �Է��ϼ��� ");
    scanf("%f %f",&num1, &num2);

    result = num1 / ((num2/10) * (num2/10));



    if (result >= 30) {
        printf("����");
    }
    else {
        if (result >= 25) {
            printf("��");
        }
        else {
            if (result >= 23) {
                printf("������");
            }
            else {
                if (result >= 18.5) {
                    printf("����");
                }
                else {
                    printf("��ü��");
                }       
            }
        }
    }

    printf("\n��� : %f",result);
}

