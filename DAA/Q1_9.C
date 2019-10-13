//using greedy algorithm
//knapsack problem with frection
void knapsack(int n,float w[],float p[],float c);
void main()
{
	float w[50],p[50],c,temp,ratio[50];
	int n,i,j;
	clrscr();

	printf("\n Enter the number of items:");//no.of object
	scanf("%d",&n);

	printf("\n Enter Waight and profit of each item");
	for(i=0;i<n;i++)
	{

		printf("\n Enter weight[%d] & profit[%d]:",i+1,i+1);
		scanf("%f %f",&w[i],&p[i]);

	}
	printf("\n Enter the capasity of knapset:");
	scanf("%f",&c);

	for(i=0;i<n;i++)
	{

		ratio[i]=p[i]/w[i];

	}
	for(i=0;i<n;i++)
	{

		for(j=i+1;j<n;j++)
		{
			if(ratio[i]<ratio[j])
			{
				temp = ratio[j]; //profit
				ratio[j] = ratio[i];
				ratio[i] = temp;

				temp = w[j];   //weight
				w[j] = w[i];
				w[i] = temp;

				temp = p[j];    //ratio
				p[j] = p[i];
				p[i] = temp;
			}
		}

	}

	knapsack(n,w,p,c);
	getch();
}
void knapsack(int n,float w[],float p[],float c)
{
	float x[100],tp=0;
	int i,j,c1;
	c1 = c;

	for(i=0;i<n;i++)
	{

		x[i] = 0.0;

	}
	for(i=0;i<n;i++)
	{

		if(w[i]>c1)
		{
			break;
		}
		else
		{
			x[i]=1.0;
			tp=tp+p[i];
			c1=c1-w[i];
		}

	}
	if(i < n)
	{
		// 0 1 vadu thase jo niche ni 2 line ne comment ma muksu to.
		x[i] = c1/w[i];
		tp = tp+(x[i]*p[i]);
		for(i=0;i<n;i++)
		{

			printf("\n The result vector is:");
			printf("\t %.2f",x[i]);

		}

		printf("\n max profit is %.2f \t" , tp);
	}

}