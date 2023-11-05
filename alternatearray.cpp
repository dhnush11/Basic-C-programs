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
	for (i=0;i<n-1;i=i+2)
		{
			t = a[i+1];
			a[i+1] = a[i];
			a[i] = t;
		}	
	for (i=0;i<n;i++)
		{
			printf("%d",a[i]);
			printf(" ");
		}
}
		
		
		
