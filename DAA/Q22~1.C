#include<stdio.h>
#include<conio.h>
int isDivBy17(int n)
{
	int s;
    if (n == 0 || n == 17)
    {
	printf("\n %d",n);
	return 1;
    }
    if (n < 17)
	return 0;

    s = isDivBy17((int)(n>>4) - (int)(n&15));

    return s;
}
void main()
{
	int n;
	clrscr();

	printf("\n Enter the n:");
	scanf("%d",&n);

	isDivBy17(n);

	getch();
}
