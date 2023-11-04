#include<stdio.h>
int main(){
	int n,i,j,s=1;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%d ",s);
			s+=1 ;}
		printf("\n");
	}
}