#include<stdio.h>
int main()
{
	printf("Enter the year");
	int y;
	scanf("%d",&y);
	if ((y%4==0)&&((y%100!=0)||(y%400==0)))
		printf("Its a leap year");
	else 
		printf("Its not a leap year");
}
