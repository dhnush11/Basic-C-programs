#include<stdio.h>
int main()
{
	int a,b ;
	printf("Enter two numbers for swapping") ;
	scanf("%d %d", &a, &b) ;
	a = a + b ;
	b = a - b ;
	a = a - b ;
	printf("A is %d", a) ;
	printf("B is %d", b) ;
}
