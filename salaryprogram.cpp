#include<stdio.h>
int main()
{
	float a,b,c,d ;
	printf("Enter your basic salary") ;
	scanf("%f", &a) ;
	b = a*0.16 ;
	c = a*0.05 ;
	d = a+b+c ;
	printf("House rent allowance is %f",b) ;
	printf("dearness allowance is %f",c) ;
	printf("Total salary is %f",d) ;
}

