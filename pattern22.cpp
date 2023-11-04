#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i+1;j++)
		{
			if(j%2==0)
				printf("%d",i+1);
			else 
				printf("*");
		}
		printf("\n");}
	int k=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n-2*i-1;j++)
		{
			if(j%2==0)
				printf("%d",k);
			else 
				printf("*");
		}
		printf("\n");
		k-=1;}}
			