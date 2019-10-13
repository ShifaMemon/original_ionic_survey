#include<stdio.h>
#include<conio.h>
#include<math.h>
//sqr(n)=sqr(x)+sqr(y)
void main()
{
	int n;//,i,j,m,a,b;
	clrscr();
       //	m=n*n;

	printf("\n Enter the n:");
	scanf("%d",&n);

	form(n);

	getch();
}
int form(int n)
{
	int a,b,i,j,m;
	m=n*n;

	for(i=1;i<n;i++)
	{
		a = i*i;
	       //	printf("a = %d  ",a);
		for(j=1;j<n;j++)
		{
			b = j*j;
		       //	printf("b = %d  ",b);
			if((a+b)==m)
			{

				printf("\n N^2 = A^2 + B^2");
				printf("\n %d = %d + %d",m,a,b);
				printf("\n x = %d \n y = %d",i,j);

			       //	return m;
			}

		}
	}
	if((a+b)!=m)
	{
		printf("\n no fectors of %d",n);
	}
	return 1;

}
