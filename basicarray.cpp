#include<stdio.h>
int main()
{
	int i,n,k,s;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
		{
			printf("Enter value");
			scanf("%d",&k);
			a[i]=k;
		}
	for (i=0;i<n;i++)
		{
			printf("%d",a[i]);
			printf(" ");
		}
}
