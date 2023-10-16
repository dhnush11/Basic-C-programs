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
	
	int z[r1][c1];
	for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
				{
					if (i>=j)
						{
							z[i][j]=a[i][j];
						}
					else
						z[i][j]=0;
				}
		}
	for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
				{
					printf("%d",z[i][j]);
				}
			printf("\n");
		}
}
