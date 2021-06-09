#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
	if(n<=1)
	{
		printf("1");
		return 1;
	}
	printf(" %d * ", n);
	return n*fact(n-1);
}

int main()
{
	int n,ans;
	scanf("%d",&n);
	if(n>=0)
	{
		ans=fact(n);
		printf("\n");
		printf("\n%d\n",ans);
	}
	return 0;	
}
	
