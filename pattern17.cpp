#include<stdio.h>
int main()
{
	int i,n,j,s=1;
	printf("Enter no of rows");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("%d ",s);
			s+=1;}
			printf("\n");}
}