#include<stdio.h>
int main()
{
	int i,j,n,k,s,t;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
		{
			printf("Enter value");
			scanf("%d",&k);
			a[i]=k;
		}
	for (i=0;i<n-1;i++)
		for (j=0;j<n-i-1;j++)
			{
				if (a[j]>a[j+1])
					{
						t = a[j];
						a[j]=a[j+1];
						a[j+1]=t;
					}
			}
	for (i=0;i<n;i++)
		{
			printf("%d",a[i]);
			printf(" ");
		}
}
