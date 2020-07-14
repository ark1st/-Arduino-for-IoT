#include<stdio.h>
int main() {
    int input = 0;
    double num1, num2, result;

    printf("=======¸Þ´º=======\n");
    printf("1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À : ");
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
        printf("Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù");
        break;
    }

    printf("\n°á°ú : %f",result);

    
}

