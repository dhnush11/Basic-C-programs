#include<stdio.h>
int main()
{
	int a,b,c,d,e,f ;
	printf("Enter marks of 5 subjects") ;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) ;
	f = (a+b+c+d+e)/5 ;
	printf("The percentage is %d %%", f) ;
}
