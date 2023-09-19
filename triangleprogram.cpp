#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 sides of triangle");
	scanf("%d %d %d", &a, &b, &c);
	if (a==b && b==c)
		printf("Its an equilateral triangle");
	else if (a!=b && b!=c && c!=a)
		printf("Its a scalene triangle");
	else 
		printf("Its an isosceles triangle");
}