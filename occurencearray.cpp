#include<stdio.h>
int main(){
	int n,i,s,y=0;
	printf("Enter no of elements");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
		{
			printf("Enter value");
			scanf("%d",&a[i]);
		}
	printf("Enter element to check no of occurence");
	scanf("%d",&s);
	for (i=0;i<n;i++)
		{
			if (a[i]==s)
				y+=1;
		}
	printf("Occurence no %d",y);
}