#include<stdio.h>
int Factorial(int n);

int main()
{
	int result = Factorial( 5 );
	printf("%d! �� %d �Դϴ�.", 5, result);
	return 0;
}

int Factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; ++i)
		result *= i;
	
	return result;
}

