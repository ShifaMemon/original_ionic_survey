#include<stdio.h>
#include<conio.h>
#include<math.h>

int divide(int dividend, int divisor)
{
	int quotient = 0;
	int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; 
	dividend = abs(dividend); 
	divisor = abs(divisor);

  	while (dividend >= divisor) 
	{ 
    		dividend -= divisor; 
			++quotient;
	}
	//printf("\n Quotiont is: %d",quotient);
	return sign * quotient;
}
void main()
{
	int a,b;
	clrscr();

	printf("\n Enter the a:");
	scanf("%d",&a);

	printf("\n Enter the b:");
	scanf("%d",&b);

	printf("\n The Division of %d and %d is : %d ",a,b,divide(a, b));
	getch();
}
