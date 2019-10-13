#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define infinity 9999
#define MAX 20

int g[MAX][MAX],spanning[MAX][MAX],n;
int prims();
void main()
{
	int i,j,tot_cost;
	clrscr();

	printf("\n Enter no. of vertoses:");
	scanf("%d",&n);

	printf("\n Enter the adjency of matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter value:[%d][%d]:",i+1,j+1);
			scanf("%d",&g[i][j]);

		}

	}
	tot_cost = prims();
	printf("\n spanning tree matrix:");

	for(i=0;i<n;i++)
	{

		printf("\n");
		for(j=0;j<n;j++)
		{

			printf("\t %d",spanning[i][j]);

		}

	}
	printf("\n total Cost of spanning tree = %d",tot_cost);
	getch();
     //	return 0;
}
int prims()
{
	int cost[MAX][MAX];
	int u,v,min_dist,from[MAX],distance[MAX];
	int visit[MAX],no_edges,i,min_cost,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(g[i][j] == 0)
			{
				cost[i][j] = infinity;
			}
			else
			{
				cost[i][j] = g[i][j];
				spanning[i][j] = 0;
			}
		}

	}
	distance[0]=0;
	visit[0]=0;

	for(i=0;i<n;i++)
	{
		distance[i]=cost[0][i];
		from[i]=0;
		visit[i]=0;

	}
	min_cost=0;
	no_edges=n-1;
	while(no_edges>0)
	{

		min_dist=infinity;
		for(i=0;i<n;i++)
		{

			if(visit[i]==0 && distance[i]<min_dist)
			{
				v = i;
				min_dist = distance[i];

			}


		}
		u = from[v];
		spanning[u][v] = distance[v];
		spanning[v][u] = distance[v];
		no_edges--;
		visit[v] = 1;
		for(i=0;i<n;i++)
		{

			if(visit[i] == 0 && cost[i][v] < distance[i])
			{

				distance[i] = cost[i][v];
				from[i] = v;

			}

		}
		min_cost = min_cost + cost[u][v];
	}

	return(min_cost);
}

