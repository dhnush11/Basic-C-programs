#include<stdio.h>
#include<math.h>
int main() {
	printf("Enter N");
	int i,n,s,l=1;
	int g = 0;
	scanf("%d",&n);
	int k = n;
	while (n/10!=0)
	{
		l+=1;
		n=n/10;
	}
	for (i=l;i!=0;i--)
	{
		s = k%10;
		g = g + s;
		k/=10;
	}
	printf("Sum of digits: %d",g);
}