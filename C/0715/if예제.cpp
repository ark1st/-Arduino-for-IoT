#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num = 0;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &num);

	if (num < 0) {
		printf("%d�� 0���� �۽��ϴ�.",num);
	}
	if (num > 0) {
		printf("%d�� 0���� Ů�ϴ�.", num);
	}
	if (num == 0) {
		printf("%d�� 0�� �����ϴ�.", num);
	}
}