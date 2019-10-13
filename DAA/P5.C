#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c=0,i;
	clrscr();
	printf("Enter any two number :");
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		c=a+c;
	}
	c=fun(a,b);
	printf("\n%d * %d = %d",a,b,c);
	getch();
}
int fun(int a,int b)
{
	c=a+c;
	return c;
}
