#include<conio.h>
#include<stdio.h>
void main()
{
	float i;
	float n;
	clrscr();
	printf("\n Enter number :");
	scanf("%f",&n);
	for(i=0;i*i<n;i+=0.0001);
	printf("%f",i);
	getch();
}