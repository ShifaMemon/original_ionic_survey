#include<conio.h>
#include<stdio.h>
int pow(x,n)
{
	int p;
	if(n==0)
	{
		return 1;
	}
	else
	{
		return x * pow(x,n-1);
	}
}
void main()
{
	int x,n,r=1,c;
	clrscr();
	printf("Enter any two numbers : ");
	scanf("%d %d",&x,&n);
	r=pow(x,n);
	printf("\n%d ^ %d = %d",x,n,r);
	getch();
}
