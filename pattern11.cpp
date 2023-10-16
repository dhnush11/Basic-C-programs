#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			for (j=0;j<i+1;j++)
				{
					printf("*");
				}
			for (j=0;j<2*n-2*i-2;j++)
				{
					printf(" ");
				}
			for (j=0;j<i+1;j++)
				{
					printf("*");
				}
			printf("\n");
		}
	for (i=0;i<n;i++)
		{
			for (j=0;j<n-i;j++)
				{
					printf("*");
				}
			for (j=0;j<2*i;j++)
				{
					printf(" ");
				}
			for (j=0;j<n-i;j++)
				{
					printf("*");
				}
			printf("\n");
		}
}
