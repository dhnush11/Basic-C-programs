#include<stdi+o.h>
int main() {
	printf("Enter N");
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=10;i++)
		printf("%d x %d = %d\n",n,i,(n*i));
	return 0;
}