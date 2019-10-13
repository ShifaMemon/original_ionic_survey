#include<stdio.h>
#include<conio.h>
#define max_size 5
void merge_sort(int,int);
void merge_array(int,int,int,int);
int array_sort[max_size];
void main()
{
	int i;
	clrscr();

	printf("\n Enter %d Element for sorting: \n",max_size);
	for(i=0;i<max_size;i++)
	{
		scanf("\n%d",&array_sort[i]);
	}

	printf("\n Your data:");

	for(i=0;i<max_size;i++)
	{
		printf("\t %d",array_sort[i]);
	}

	merge_sort(0,max_size-1);

	printf("\n Sorted Data:");

	for(i=0;i<max_size;i++)
	{
		printf("\t %d",array_sort[i]);
	}

	getch();
//	return 1;

}
void merge_sort(int i,int j)
{
	int m;
	if(i<j)
	{

		m =(i+j)/2;
		merge_sort(i,m);
		merge_sort(m+1,j);
		merge_array(i,m,m+1,j);

	}

}
void merge_array(int a,int b,int c,int d)
{
	int p[50];
	int j=c,i=a,k=0;

	while(i<=b && j<=d)
	{

		if(array_sort[i]<array_sort[j])
		{

			p[k++]=array_sort[i++];

		}
		else
		{
			p[k++]=array_sort[j++];
		}

	}
	while(i<=b)
	{

		p[k++]=array_sort[i++];
	}
	while(j<=d)
	{
		p[k++]=array_sort[j++];

	}
	for(i=a,j=0;i<=d;i++,j++)
	{
		array_sort[i]=p[j];
	}
}