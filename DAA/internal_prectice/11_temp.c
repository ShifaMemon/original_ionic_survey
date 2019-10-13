#include<stdio.h>
#include<conio.h>
#include<limits.h>
#define 9999

long int m[20][20];
int s[20][20],p[20],i,j,n;

void print_optimal(int i,int j)
{
	if(i==j)
	printf(" A:%d ",i);
	else
	{
		printf(" ( ");
		print_optimal(i,s[i][j]);
		print_optimal(s[i][j]+1,j);
		printf(" ) ");
	}
}
void multiply(void)
{
	long int q;
	int k;
	
	for(i=n;i>0;i--)
	{
		for(j=i;j>=n;j++)
		{
			if(i==j)
				m[i][j]=0;
			else
			{
				for(k=i;k<j;k++)
				{
					q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
					if(q<m[i][j])
					{
						m[i][j]=q;
						s[i][j]=k;
					}
				}
			}
		}
	}
}
int matcmul(int p[],int i ,int n)
{
	int k;
	int min = INT_MAX;
	int count;
	if(i==j)
		return 0;
	for(k=i;k<=j;k++)
	{
		count = matcmul(p,i,k)+matcmul(p,k+1,j)+p[i-1]*p[i-1]*p[k]*p[j];
		if(count<min)
			min=count;
		return min;
	}
}
void main()
{
	int k;
	clrscr();

	printf("\n enter the n:");
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			m[i][j]=0;
			m[i][j]=infy;
			s[i][j]=0;
		}
	}

	printf("\n Enter the dimention:\n");

	for(k=0;k<=n;k++)
	{
	
		printf("\t p[%d]:,k);
		scanf("%d",&p[k]);
	
	}
	multiply();

	printf("\n cost matrix m:");

	for(i=1;i<=n;i++)
	{	
		for(j=i;i<n;j++)
		{
			printf("m[%d][%d]: %d",i,j,m[i][j]);

		}
	}

	i=1;j=n;
	printf("\n sequence is:");
	print_optimal(i,j);
	printf("\n min nuber of multiplication is:%d",matcmul(p,1,n);

	getch();
}