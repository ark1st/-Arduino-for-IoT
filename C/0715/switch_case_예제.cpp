#include<stdio.h>
int main() {
    int input = 0;
    double num1, num2, result;

    printf("=======�޴�=======\n");
    printf("1. ����, 2. ����, 3. ����, 4. ������ : ");
    scanf("%d",&input);

    switch (input)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        printf("�߸��� �Է��Դϴ�");
        break;
    }

    printf("\n��� : %f",result);

    
}

