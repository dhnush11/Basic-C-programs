#include<stdio.h>
int main(){
	int n,i,j,p,q,r,s,k=1;
	printf("Enter N in nxn matrix");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<(n+2)/2;i++)
		{
			for(p=i;p<=n-i-1;p++)
				a[i][p]=k++;
			for(q=i+1;q<=n-i-1;q++)
				a[q][n-i-1]=k++;
			for(r=n-i-2;r>=i;r--)
				a[n-i-1][r]=k++;
			for(s=n-i-2;s>=i+1;s--)
				a[s][i]=k++;
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");}}
			
