#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+2;j++)
		{
			if (j==n+1)
				printf("%d",i+2);
			else
				printf("%d",i+1);
		}
		printf("\n");}}