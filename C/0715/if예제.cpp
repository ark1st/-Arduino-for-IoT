#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num = 0;
	printf("정수를 입력하세요\n");
	scanf("%d", &num);

	if (num < 0) {
		printf("%d는 0보다 작습니다.",num);
	}
	if (num > 0) {
		printf("%d는 0보다 큽니다.", num);
	}
	if (num == 0) {
		printf("%d는 0과 같습니다.", num);
	}
}