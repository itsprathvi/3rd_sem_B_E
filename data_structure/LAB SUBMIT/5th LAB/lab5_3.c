#include<stdio.h>
#include<stdlib.h>
int largest(int a[],int n)
{
	if(n==1)
	{
		return a[0];
	}
	else
	{
		int max=largest(a,n-1);
		return a[n-1] > max ? a[n-1] : max;
	}
}

int main()
{
	int n,a[100];
	printf("Enter the size of the Array = ");
	scanf("%d",&n);
	printf("\nEnter the Elements in the Array = ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	int large=largest(a,n);
	printf("\nLargest Number is %d\n",large);
	return 0;
}
