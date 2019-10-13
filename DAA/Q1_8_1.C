#include <stdio.h>
#include <math.h>
#define N 10

int a[N];
int n = N;

void merge(int low, int mid, int high)
{
	int h, i, j, k;
	static int b[N];

	h = i = low; j = mid + 1;
	while(h <= mid && j <= high)
	{
	       /* i.e., while both sets not exhausted */
		if(a[h] <= a[j])
		{
			b[i] = a[h];
			h++;
		}
		else
		{
			b[i] = a[j];
			j++;
	        }
	       i++;
	}
	/* we should now handle any remaining elements */
	if(h > mid)
	{
		for(k = j; k<= high; k++)
		{
			b[i] = a[k];
			i++;
		}
	} 
	else 
	{
	       for(k = h; k<= mid;k++)
		{
	      		b[i] = a[k];
			i++;
		}
	}
	/* copy merged array back to a[ ] */
	     for(k =low;k<= high;k++)
		       a[k] = b[k];
}
/*------------------------ mergesort ----------------------*/
void mergesort(int low, int high)
{
	int mid;

	if(low < high)
	{
		mid = (low + high)/2;  /* int division will floor */
		mergesort(low, mid);
		mergesort(mid+1, high);
		merge(low, mid, high);
	}
}
/*------------------------ main ---------------------------*/
void main(int argc, char *argv[])
{
	int i;

 	for(i=0;i<N;i++) 
		a[i] = rand();

 	printf("Before Sort\n");
 	for(i=0;i<N-1;i++) 
		printf("%d ", a[i]);

 	mergesort(0,N-1);

 	printf("\nAfter Sort\n");
 	for(i=0;i<N-1;i++) 
		printf("%d ", a[i]);
}
