#include<stdio.h>
#include<conio.h>
float multiply(float x,int n);
void main()
{

	float x,ans;
	int n;
	clrscr();

	printf("\n Enter the x:");
	scanf("%f",&x);

	printf("\n Enter the value for power:");
	scanf("%d",&n);

	ans = multiply(x,n);

	printf("\n The Ans of %.2f^%d: %.2f",x,n,ans);

	getch();
}
float multiply(float x,int n)
{
	float a;
	if(n==0)
		return 1;
	a = multiply(x,n/2);

	if(n%2 == 1)
	{
	       //	printf("\n Odd number:%d",n);
		return x*a*a;
	}
	else
	{
	       //	printf("\n Even number:%d",n);
		return a*a;
	}
}