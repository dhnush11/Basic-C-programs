#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = 0, b = 1, result;
    if (n == 0) 
        result = a;
	else if (n == 1) 
        result = b;
	else 
	{
    	for (int i = 2; i <= n; i++) 
		{
            result = a + b;
            a = b;
            b = result;
        }
	}
	printf("nth term of fibanocci series : %d",result);
}