#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	if(n<=0)
		return 1;
	else
		return n*fact(n-1);
}

int main()
{
	int n,sum;
	printf("Enter the Number\n");
	scanf("%d",&n);
	if(n>=1)
	{
		sum=fact(n);
		printf("%d! = %d\n",n,sum);
		printf("\n");
	}
	return 0;
}
