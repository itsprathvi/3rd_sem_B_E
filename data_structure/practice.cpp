#include<stdio.h>
#include<stdlib.h>
void toh(int n,int a,int b,int c)
{
	if(n>0)
	{
		toh(n-1,a,c,b);
		printf("The disc is moved from %d to %d\n",a,c);
		toh(n-1,b,a,c);
	}
}

int main()
{
	int n;
	printf("Enter the number of discs : ");
	scanf("%d",&n);
	toh(n,1,2,3);
	return 0;
}