#include<stdio.h>
#include<conio.h>
#include<math.h>
void rbs(int a[],int low,int high,int x);
void sort(int a[] , int high);
void main()
{
	int high,i,a[100],x;
	clrscr();

	printf("\n Enter the size of array:");
	scanf("%d",&high);

	for(i=1;i<=high;i++)
	{
		printf("\n Enter the element:%d :",i);
		scanf("%d",&a[i]);

	}
	sort(a,high);
	printf("\n Sorted Array:");
	for(i=1;i<=high;i++)
	{
		printf("\t %d",a[i]);

	}
	printf("\n Enter Element to be search x:");
	scanf("%d",&x);

       //	printf("\n %d",rbs(a,1,high,x));
       rbs(a,1,high,x);
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
void rbs(int a[],int low,int high,int x)
{
	int mid,t;//a1,a2;
	if(low > high)
	{
		printf("\n Element not found:");
		return;
	}
	mid=(low+high)/2;
//       a1=rbs(a,mid-1,high,x);
  //     a2=rbs(a,mid+1,high,x);
	if(a[mid] ==  x)
	{
		printf("\n Element is found and %d position:",mid);
	}
	else if(x < a[mid])
	{
	     //  return
	     rbs(a,mid-1,high,x);
	}

	else if(x>a[mid])
	{
	     //	return
	     rbs(a,mid+1,high,x);
	}
       //	return;



}
