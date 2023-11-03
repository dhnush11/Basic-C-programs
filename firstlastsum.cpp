#include<stdio.h>
#include<math.h>
int main() {
	printf("Enter N");
	int n,r,s=0;
	scanf("%d",&n);
	int k=n;
	while (n!=0)
	{
		if (n==k)
			{
				r = n%10;
				s+=r;
				n/=10;
			}	
		else if (n>0&&n<=9)
			{
				s+=n;
				n/=10;
			}
		else
			n/=10;
	}
	printf("Sum of first and last digits: %d",s);
}