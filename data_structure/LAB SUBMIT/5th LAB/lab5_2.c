#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
	if(n<2)
		return n;
	else
		return fibo(n-1)+fibo(n-2);
}

int main()
{
	int i,n;
	printf("Enter the Number of terms for fibonacci :\n");
	scanf("%d",&n);
	printf("\nFibonacci series till %d terms\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",fibo(i));
	}
	printf("\t");
	return 0;
}

