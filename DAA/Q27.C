#include<stdio.h>
#include<conio.h>
#include<math.h>

int fectors(int n)
{
    int i;
    while (n%2 == 0)
    {
	printf("%d ",2);
	n = n/2;
    }

    for (i=3;i<=sqrt(n);i=i+2)
    {
	while (n%i == 0)
	{
	    printf(" %d ",i);
	    n = n/i;
	}
    }

  if (n > 2)
    return n;
}

void main()
{
	int n;
	clrscr();
	printf("\n Enter the n:");
	scanf("%d",&n);

	fectors(n);

	getch(); 
} 
