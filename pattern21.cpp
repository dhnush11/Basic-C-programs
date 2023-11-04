#include<stdio.h>
int main(){
	int i,n,s,j;
	printf("Enter starting integer and no of rows");
	scanf("%d %d",&s,&n);
	for (i=0;i<n;i++){
		for (j=0;j<i+1;j++)
			printf("%d ",s);
		s+=1;
		printf("\n");
	}
	s-=1;
	for (i=0;i<n;i++){
		for (j=0;j<n-i;j++)
			printf("%d ",s);
		s-=1;
		printf("\n");}}
		