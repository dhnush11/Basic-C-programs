#include<stdio.h>
int main()
{
	int i,n,k,j;
	printf("Enter no of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for(k=0;k<n-i-1;k++)
			printf(" ");
		for(j=0;j<i+1;j++)
			printf("%d ",i+1);
			printf("\n");}
}