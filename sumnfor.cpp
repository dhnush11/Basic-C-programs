#include<stdio.h>
int main() {
	printf("Enter N");
	int i,n,t=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		t += i;
	printf("Total : %d",t);
	return 0;
}