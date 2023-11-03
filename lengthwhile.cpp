#include<stdio.h>
int main() {
	printf("Enter N");
	int i,n,l=1;
	scanf("%d",&n);
	while (n/10!=0)
	{
		l+=1;
		n=n/10;
	}
	printf("Length : %d",l);
	return 0;
}
	