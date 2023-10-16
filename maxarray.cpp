#include<stdio.h>
int main()
{
	int i,n,k;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
		{
			printf("Enter value");
			scanf("%d",&k);
			a[i]=k;
		}
	int c=0;
	for (i=0;i<n;i++)
		{
			if (a[i]>c)
				{
					c=a[i];
				}
		}
	printf("max %d",c);
}
