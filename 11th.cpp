#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter date, month and year sequentially");
	scanf("%d %d %d", &d, &m, &y);
	if (m==1||m==3||m==5||m==7||m==8||m==10)
		{
			if (d == 31)
			{
				
				m = m+1;
				d = 1;
			}
			else if (d<31&& d>=1)
				d = d +1;
			else
				printf("Invalid");
		}
	else if (m==2)
		{
			if ((y%4==0)&&((y%100!=0)||(y%400==0)))
				{
					if (d == 29)
					{
						m = m+1;
						d = 1;
					}
					else if (d<29 && d>=1)
						d = d + 1;
					else 
						printf("Invalid");
				}
			else 
				{
					if (d == 28)
					{
						m = m+1;
						d = 1;
					}
					else if (d<28 && d>=1)
						d = d + 1;
					else 
						printf("Invalid");
				}
		}
	else if (m==4||m==6||m==9||m==11)
		{
			if (d == 30)
			{
				
				m = m+1;
				d = 1;
			}
			else if (d<30&& d>=1)
				d = d +1;
			else
				printf("Invalid");
		}
	else if (m==12)
		{
			if (d==31)
				{
					d = 1;
					m = 1;
					y = y + 1;
				}
			else if (d<31&& d>=1)
				d = d + 1;
			else 
				printf("Invalid");
		}
	printf("The next date is %d %d %d",d,m,y);
}
