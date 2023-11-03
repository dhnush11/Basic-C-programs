#include<stdio.h>
int main() {
	printf("Enter N");
	int i,n,f=1;
	scanf("%d",&n);
	for (i=n;i!=0;i--)
		f*=i;
	printf("Factorial : %d",f); }
