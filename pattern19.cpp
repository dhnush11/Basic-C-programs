#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("%d",j+1);
		printf("\n");
	}
}