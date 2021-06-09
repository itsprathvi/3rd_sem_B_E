#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{
	if(n==0)
		return n;
	return n+sum(n-1);
}

int main()
{
	int n,ans;
	scanf("%d",&n);
	if(n>=0)
	{
		ans=sum(n);
		printf("\n%d\n",ans);
	}
	return 0;	
}
	
