#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter number of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for (k=0;k<(n-i-1);k++)
				{
					printf(" ");
				}
			for (j=0;j<2*i+1;j++)
				{
					printf("*");
				}
			printf("\n");
		}
	for (i=0;i<n-1;i++)
		{
			for (k=0;k<i+1;k++)
				{
					printf(" ");
				}
			for (j=0;j<2*n-2*i-3;j++)
				{
					printf("*");
				}
			printf("\n");
		}}
	