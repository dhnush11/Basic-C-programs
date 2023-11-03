#include<stdio.h>
#include<math.h>
int main()
{
	int a,r,i,b=0;
	printf("Enter decimal no");
	scanf("%d",&a);
	for (i=0;a!=0;i++)
	{
		r = a%2;
		b = b+r*pow(10,i);
		a/=2;
	}
	printf("Binary equivalent: %d",b);
}