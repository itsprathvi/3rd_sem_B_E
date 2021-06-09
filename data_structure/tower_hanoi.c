#include<stdio.h>
#include<stdlib.h>
void toh(int n,int a,int b,int c)
{
	if(n>0)
	{
		toh(n-1,a,c,b);
		printf("Moving the disc from %d to %d\n",a,c);
		toh(n-1,b,a,c);
	}
	return;
}

int main()
{
	int n;
	printf("Enter the no of discs= ");
	scanf("%d",&n);
	printf("\n\n");
	toh(n,1,2,3);
	return 0; 
}
