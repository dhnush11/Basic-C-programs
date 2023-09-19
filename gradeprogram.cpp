#include<stdio.h>
int main()
{
	int a,b,c,d,e ;
	printf("Enter marks of 5 subjects in order of phy, chem, bio, math and cs") ;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) ;
	if (a>=90)
		printf("Physics grade : A");
	else if(a>=80 && a<90)
		printf("Physics Grade : B");
	else if(a>=70 && a<80)
		printf("Physics Grade : C");
	else if(a>=60 && a<70)
		printf("Physics Grade : D");
	else if(a>=40 && a<60)
		printf("Physics Grade : E");
	else if(a<40)
		printf("Physics Grade : F");
	if (b>=90)
		printf("Chem grade : A");
	else if(b>=80 && b<90)
		printf("Chem Grade : B");
	else if(b>=70 && b<80)
		printf("Chem Grade : C");
	else if(b>=60 && b<70)
		printf("Chem Grade : D");
	else if(b>=40 && b<60)
		printf("Chem Grade : E");
	else if(b<40)
		printf("Chem Grade : F");
	if (c>=90)
		printf("Bio grade : A");
	else if(c>=80 && c<90)
		printf("Bio Grade : B");
	else if(c>=70 && c<80)
		printf("Bio Grade : C");
	else if(c>=60 && c<70)
		printf("Bio Grade : D");
	else if(c>=40 && c<60)
		printf("Bio Grade : E");
	else if(c<40)
		printf("Bio Grade : F");
	if (d>=90)
		printf("Math grade : A");
	else if(d>=80 && d<90)
		printf("Math Grade : B");
	else if(d>=70 && d<80)
		printf("Math Grade : C");
	else if(d>=60 && d<70)
		printf("Math Grade : D");
	else if(d>=40 && d<60)
		printf("Math Grade : E");
	else if(d<40)
		printf("Math Grade : F");
	if (e>=90)
		printf("CS grade : A");
	else if(e>=80 && e<90)
		printf("CS Grade : B");
	else if(e>=70 && e<80)
		printf("CS Grade : C");
	else if(e>=60 && e<70)
		printf("CS Grade : D");
	else if(e>=40 && e<60)
		printf("CS Grade : E");
	else if(e<40)
		printf("CS Grade : F");
}