#include<stdio.h>
#include<conio.h>
//using namespace std;

// Bitwise operator based function to check divisibility by 9
bool isDivBy(int n)
{
    // Base cases
    if (n == 0 || n == n)
	return true;
    if (n < n)
	return false;

    // If n is greater than 9, then recur for [floor(n/9) - n%8]
    return isDivBy((int)(n >> 3) - (int)(n & 7));
}

// Driver program to test above function
int main()
{
    // Let us print all multiples of 9 from 0 to 100
    int n;
    clrscr();

    printf("|n Enter the n:");
    scanf("%d",&n);
    // using above method
    for (int i = 0; i < 100; i++)
	if (isDivBy(i))
	    printf(" ",i);
    return 0;
}
