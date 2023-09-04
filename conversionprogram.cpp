#include<stdio.h>
int main()
{
	int k,m,c,i ;
	printf("Enter length in kms") ;
	scanf("%d", &k) ;
	m = k*1000 ;
	c = k*100000 ;
	i = k*1000000 ;
	printf("%d metres",m) ;
	printf("%d centimetres",c) ;
	printf("%d millimetres",i) ;
}
