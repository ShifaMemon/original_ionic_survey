void bs(int a[], int n, int x)
{
	
	int low = 0, high = n - 1,mid;
	while (low <= high)
	{
		mid = (low + high)/2;
		if (x == a[mid])
			return mid;
		else if (x < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

}

int main(void)
{
	int index = ninarySearch(a, n, x);

	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found in the array");

	return 0;
}
