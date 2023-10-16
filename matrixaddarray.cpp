#include<stdio.h>
int main()
{
	int r1,c1,i,j,k;
	printf("Enter the number of rows1");
	scanf("%d",&r1);
	printf("Enter the number of columns1");
	scanf("%d",&c1);
	int a[r1][c1] ;
	for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
				{
					printf("Enter value %d %d",i,j);
					scanf("%d",&k);
					a[i][j]=k;
				}
		}
	int r2,c2;
	printf("Enter the number of rows2");
	scanf("%d",&r2);
	printf("Enter the number of columns2");
	scanf("%d",&c2);
	int b[r2][c2] ;
	for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
				{
					printf("Enter value %d %d",i,j);
					scanf("%d",&k);
					b[i][j]=k;
				}
		}
	int z[r1][c2];
	for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
				{
					z[i][j]=a[i][j]+b[i][j];
				}
		}
	for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
				{
					printf("%d",z[i][j]);
				}
			printf("\n");
		}
}
