#include<stdio.h>
int main() {
	printf("Enter N");
	int i,n;
	scanf("%d",&n);
	for (i=1;2*i<=n;i++)
		printf("%d\n",(2*i));
	return 0;
}