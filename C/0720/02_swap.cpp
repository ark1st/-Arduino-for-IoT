#include<stdio.h>
void swap_callbyValue(int x, int y);
void swap_callbyPointer(int* xp, int* yp);

int main() {
	int a, b;
	int *ap = NULL, *bp = NULL;
	a = 138;
	b = 237;
	ap = &a;
	bp = &b;
	
	printf("%d %d\n%d %d",a,b,ap,bp);
	printf("\n\n ---------- \n\n");
	
	//swap_callbyValue
	swap_callbyValue(a,b);
	printf("%d %d\n%d %d",a,b,ap,bp);
	printf("\n\n ---------- \n\n");
	
	//swap_callbyPointer
	swap_callbyPointer(ap,bp);
	printf("%d %d\n%d %d",a,b,ap,bp);
	printf("\n\n ---------- \n\n");

}


void swap_callbyValue(int x, int y)
{
	printf("Swap_callbyValue : %d %d %d %d \n",x,y,&x,&y);
	int temp;
	temp = y;
	y = x;
	x = temp;
}
void swap_callbyPointer(int* xp, int* yp)
{
	printf("Swap_callbyPointer : %d %d %d %d \n",xp,yp,&xp,&yp);
	int temp;
	temp = *yp;
	*yp = *xp;
	*xp = temp;
}
