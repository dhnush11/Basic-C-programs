#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for (j=0;j<n-i-1;j++)
				{
					printf(" ");
				}
			for (j=0;j<i+1;j++)
				{
					printf("*");
				}
			for (j=0;j<i;j++)
				{
					printf("*");
				}
			printf("\n");
		}
	for (i=0;i<n-1;i++)
		{
			for (j=0;j<i+1;j++)
				{
					printf(" ");
				}
			for (j=0;j<2*n-2*i-3;j++)
				{
					printf("*");
				}
			for (j=0;j<n-i;j++)
				{
					printf("");
				}
			printf("\n");
		}
}
