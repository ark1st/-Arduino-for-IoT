#include<stdio.h>
int main() {
    int input = 0;
    double num1, num2, result;

    printf("=======�޴�=======\n");
    printf("1. ����, 2. ����, 3. ����, 4. ������ : ");
    scanf("%d",&input);

    printf("�� ���� �Ǽ��� �Է� :");
    scanf("%f %f",&num1, &num2);

    if (input == 1) {
        result = num1 + num2;
    }
    else if (input == 2) {
        result = num1 - num2;
    }
    else if (input == 3) {
        result = num1 * num2;
    }
    else if (input == 4) {
        result = num1 / num2;
    }
    else {
    printf("\n�߸��� �Է��Դϴ�..");
    }       

    printf("\n��� : %f",result);
}

