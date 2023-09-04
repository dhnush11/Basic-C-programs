#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l ;
	/* ADDITION */
	printf("Enter two numbers for sum") ;
	scanf("%d %d", &a, &b) ;
	c = a + b ;
	printf("The sum is %d", c) ;
	
	/* SUBTRACTION */
	printf("Enter two numbers for difference") ;
	scanf("%d %d", &d, &e) ;
	f = d - e ;
	printf("The difference is %d", f) ;
	
	/* MULTIPLICATION */
	printf("Enter two numbers for multiplication") ;
	scanf("%d %d", &g, &h) ;
	i = g * h ;
	printf("The result is %d", i) ;
	
	/* DIVISION */
	printf("Enter two numbers for division") ;
	scanf("%d %d", &j, &k) ;
	l = j/k ;
	printf("The result is %d", l) ;
}
