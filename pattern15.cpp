#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter no of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for(j=0;j<i+1;j++)
			printf("%d ",i+1);
			printf("\n");}
}
	