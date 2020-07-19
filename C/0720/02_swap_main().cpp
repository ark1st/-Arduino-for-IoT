#include<stdio.h>
int main() {
	//sawp in main()
	int x, y, temp;
	int a, b;
	x = 138;
	y = 237;
	printf("%d %d\n", x, y);
	
	temp = y;
	y = x;
	x = temp;
	
	printf("%d %d\n", x, y);
}
