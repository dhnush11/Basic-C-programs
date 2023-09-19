#include<stdio.h>
int main()
{
	printf("Enter units of electricity");
	int u,z;
	scanf("%d",&u);
	if (u<=100)
		z = u*1;
	else if (u>100 && u<=250)	
		z = u*3;
	else 
		z = u*5;
	printf("Cost of electricity bill is %d",z);
}
