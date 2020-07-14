#include<stdio.h>
int main() {
    int input = 0;
    double num1, num2, result;

    printf("=======¸Ş´º=======\n");
    printf("1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À : ");
    scanf("%d",&input);

    printf("µÎ °³ÀÇ ½Ç¼ö¸¦ ÀÔ·Â :");
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
    printf("\nÀß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù..");
    }       

    printf("\n°á°ú : %f",result);
}

