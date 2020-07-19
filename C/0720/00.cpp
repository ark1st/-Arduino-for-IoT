#include<stdio.h>
int Sum(int a, int b);
int Calcul(int a, int b);
int main() {
	printf("%d\n", Sum(10, 20));
	
	int A = 30, B = 40;
	int C = Sum(A, B);
	printf("%d\n", C);
		
	return 0;
}

int Sum(int a, int b) {
	int sum_Num = a + b;
	return sum_Num;
}

int Calcul(int a, int b) {
	int sum_Num = a + b;
	int sub_Num = a - b;
	int mult_Num = a * b;
	int div_Num = a / b;
	
	return ....???????? ;
}
