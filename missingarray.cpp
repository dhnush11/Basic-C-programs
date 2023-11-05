#include<stdio.h>
int main()
{
	int i,j,n,k,s,t;
	printf("Enter N");
	scanf("%d",&s);
	int a[s-1];
	for (i=0;i<s-1;i++)
		{
			printf("Enter value of array");
			scanf("%d",&a[i]);
		}
	int sum=0;
	int sum1=0;
	for (i=1;i<s+1;i++)
		{
			sum = sum + i;
		}
	for (i=0;i<s-1;i++)
		{
			sum1 = sum1+a[i];
		}
printf("The missing number is %d",(sum-sum1));
}
