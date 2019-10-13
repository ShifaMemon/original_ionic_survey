#include<stdio.h>
#include<conio.h>
#include<math.h>
void sort(int a[] , int high);
int bs(int [],int,int,int);
void main()
{
	int i,mid,a[100],n,x,j;
	clrscr();

	printf("\n Enter the value for array:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		printf("\n Enter the elements:%d:",i);
		scanf("%d",&a[i]);

	}
	sort(a,n);
	printf("\n Soreted Array:");
	for(i=1;i<=n;i++)
	{
		printf("\t %d",a[i]);
	}

	printf("\n Enter the search element:");
	scanf("%d",&x);

	j = bs(a,0,n,x);

	if(j >= 0)
    	{
		printf("\n starting from 1 \n The key %d was found at : %d ",x,j);
    	}
    	else
   	{
        	printf("The key %d was not found",j);
    	}
   	
	getch();
}
void sort(int a[] , int high)
{
	int i,j,temp;
	for(i=1;i<=high;i++)
	{

		for(j=i;j<=high;j++)
		{

			if(a[i]>a[j])
			{

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}

		}

	}
}
int bs(int a[], int l, int h, int x)
{

	int mid;
	while (l<= h)
	{
		mid= l+(h-l)/2;

		if (x == a[mid])
			return mid;

		if(x < a[mid])
			h = mid - 1;

		else
			l = mid + 1;
	}

	return -1;

}

/*void bs(int a[],int n,int x,int j)
{
	int i=0,high=n-1,mid;
	while(i<=high) do
	{
		mid=floor((low+high)/2);
		if(x<a[mid])
		{
			j=mid;
			return;
		}
		if(x<a[mid])
		{
			high=mid-1;
		}
		else
		{
			i=mid+1;
		}
	}
	j=n;
} */


