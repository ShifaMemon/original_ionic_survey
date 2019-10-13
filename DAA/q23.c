#include<stdio.h> 
#include<conio.h>
  
int subtract(int x, int y) 
{ 
    while (y != 0) 
    { 
	int borrow = (~x) & y; 
 	x = x ^ y; 
  	y = borrow << 1; 
    } 
    return x; 
} 
void main() 
{ 
	int x,y;
	clrscr();

	printf("\n Enter the x:");
	scanf("%d",&x);

	printf("\n Enter the y:");
	scanf("%d",&y);

	printf("%d - %d is : %d", x, y , subtract(x, y)); 

	getch(); 
} 
