#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{

	int d,r,n;
	clrscr();
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("2 is ans");
	}
	else
	{
		r=sqrt(n);
		d=3;

		while((n%d!=0)&&d<r)
		{
			d=d+2;
		}
		if(n%d==0)
			printf("ans is %d",d);
		else
			printf("ans is 1");
	}
	getch();
}