#include<stdio.h>
void usingarr(char* cp, int n);

int main() {
	char A[20] = "Hello World!";
	usingarr(A, 20);
	printf("%s\n", A);
	
	return 0;
}

void usingarr(char* cp, int n)
{
	printf("%s\n", cp);
	*(cp + 11) = '?'; // cp[11] = '?'
}
