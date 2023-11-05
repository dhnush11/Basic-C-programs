#include<stdio.h>
int main()
{
	int i,j,n,k,s,t,h,b;
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
	printf("Enter number for finding kth largest and smallest");
	scanf("%d",&t);
	b = a[t-1];
	h = a[n-t]
	printf("%d th smallest number : %d\n",t,b);
	printf("%d th largest number : %d",t,h);
	
}
