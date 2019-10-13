#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	double i=1,p=0.000001;
	clrscr();
	printf("\nEnter Number : ");
	scanf("%d",&n);
	while(i*i<n)
		i++;
	--i;
	while(i*i<n)
		i+=p;
	printf("%f",i);
	getch();
}