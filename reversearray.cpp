#include<stdio.h>
int main()
{
	int i,j,n,k,s,t;
	j = -1;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for (i=0;i<n;i++)
		{
			printf("Enter value");
			scanf("%d",&k);
			a[i]=k;
		}
	for (i=n-1;i!=-1;i--)
	{
		j = j + 1;
		b[j]=a[i];
	}
	for (i=0;i<n;i++)
		{
			printf("%d",b[i]);
			printf(" ");
	}
}
		
