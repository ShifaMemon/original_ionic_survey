#include<stdio.h>
#include<conio.h>

int min(int x, int y)
{
	return (x < y) ? x : y;
}
int max(int x, int y)
{
	return (x > y) ? x : y;
}
void main()
{

	int x,y;
	clrscr();

	printf("\n Enter the x:");
	scanf("%d",&x);

	printf("\n Enter the y:");
	scanf("%d",&y);

	printf("\n The Maximum number between %d and %d is: %d",x,y,max(x,y));
	printf("\n The Minimum number between %d and %d is: %d",x,y,min(x,y));

	getch();
}
