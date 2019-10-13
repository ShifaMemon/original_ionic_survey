#include<stdio.h>
#include<conio.h>
#include<math.h>
long func(long,long);
long numberofdigit(long,long);
void main()
{
	//long int a,b,c,div=0,n,x,y,cnt=0;
	long m,n;
	clrscr();

	printf("\n Enter the m:");
	scanf("%ld",&m);

	printf("\n Enter the n:");
	scanf("%ld",&n);

	printf("\n multiple %ld and %ld is : %ld",m,n,func(m,n));

	getch();
}

long numberofdigit(long m , long n)
{

	long max;
	int v = 0;

	if(m>=n)
		max = m;
	else
		max = n;

	while(max>0)
	{
		max = max / 10;
		v++;
		
	}
	return v;

}
long func(long u,long v)
{

	long x,y,w,z,m,n,p,q,r;
	n = numberofdigit(u,v);

	if(u==0 || v==0)
		return 0;
	else if(n<=2)
		return (u*v);
	else
	{
		m = floor(n/2);
		w = u/pow(10,m);
		x = (u % (int)pow(10,m));
		y = v/pow(10,m);
		z = (v%(int)pow(10,m));
		p = func(w,y);
		q = func(x,z);
		r = func(w+x,y+z);
		return p*pow(10,2*m)+(r-p-q)*pow(10,m)+q;

	}
      //	return p*pow(10,2*n)+(r-p-q)*pow(10,m)+q;
}
