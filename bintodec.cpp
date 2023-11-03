#include<stdio.h>
#include<math.h>
int main() {
	printf("Enter binary no");
	int a,d,i;
	scanf("%d",&a);
	for(i=0;a!=0;i++)
	{
		d += (a%10)*pow(2,i);
		a/=10;
		printf("%d",d);
	}
	printf("Decimal equivalent %d",d);
}