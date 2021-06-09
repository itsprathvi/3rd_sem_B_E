#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1=0,n2=1,n3,n;
	printf("Enter N\n");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(int i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}




