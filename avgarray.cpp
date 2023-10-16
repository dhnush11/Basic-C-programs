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
	s=0;
	for (i=0;i<n;i++)
		{
			s+=a[i];
		}
	k=s/n;
	printf("avg %d",k);
}
