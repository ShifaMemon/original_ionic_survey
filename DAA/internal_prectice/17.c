#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define infy 9999
int MAX 20

int g[MAX][MAX],spanning[MAX][MAX],n;
int prims();
void main()
{
	int i,j,tot_cost;
	clrscr();

	printf("\n enter the vertices:");
	scanf("%d",&n);

	printf("\n Adjecency matrix is:");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\n Enter the array:[%d][%d]:i,j);
			scanf("%d",&g[i][j]);
		}
	}
	tot_cost = prims();
	printf("\n spanning tree matrix:")

	for(i=1;i<=n;i++)
	{
		printf("\n ")
		for(j=1;j<=n;j++);
			printf("\t %d:",spanning[i][j]);
	}

	printf("\n total cost of spanning tree : %d",tot_cost);

	getch();
}
#include<stdio.h>
#include<conio.h>
#include<stlib.h>
#define infy 9999
int MAX 20

int g[MAX][MAX],spanning[MAX][MAX],n;
int prims();

void main()
{
	int i,j,tot_cost;
	clrscr();

	printf("\n enter the vertex:");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("\n Enter the edges:[%d][%d]",i,j);
			scanf("%d",&g[i][j]);
		}
	}

	tot_cost=prims();
	printf("\n Spanning tree:");		
	
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=i;j<=n;j++)
		{
			printf("\t %d",spanning[i][j]);	
		}
	}
	
	printf("\n total cost of spanning tree is: %d",tot_cost);

	getch();
}
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#define infy 9999
int max 20

int g[max][max],s[max][max],n;
int prims();

void main()
{
	int i,j,t_cost;
	clrscr();

	printf("\n entre the vertex:");
	scanf("%d",&n);	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\n Enter the edge[%d][%d]:",i,j);
			scanf("%d",&g[i][j]);
		}
	}

	t_cost=prims();

	printf("\n spanning tree:");
	
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("\t %d",s[i][j]);
		}
	}

	printf("\n total cost if spanning tree is: %d",t_cost);
	getch();
}
int prims()
{
	int c[max][max],from[max],dist[max],visit[max];
	int u,v,i,j,min_dit,min_cost,no_edges;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(g[i][j]==0)
				cost[i][j]=infy;
			else
				c[i][j]=g[i][j];
				s[i][j]=0;
		}
	}
	dist[0]=0;
	vosit[0]=1;

	for(i=1;i<=n;i++)
	{
		dist[i]=c[0][i];
		from[i]=0;
		visit[i]=0;
	}
	min_cost=0;
	no_edges=n-1;
}
int prims()
{
	int c[max][max],dist[max],from[max],visit[max];
	int i,j,u,v,min_dist,no_edges,min_cost;
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(g[i][j]==0)
				c[i][j]=infy;
			else
				c[i][j]=g[i][j];
				s[i][j]=0;

	
	dist[0]=0;
	visit[0]=1;
	
	for(i=1;i<=n;i++)
		dist[i]=c[0][i];
		from[i]=0;
		visit[i]=0;

				
}